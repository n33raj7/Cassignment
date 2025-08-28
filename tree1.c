#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *left;
    struct node *right;
};

struct node *root = NULL;

void inorder(struct node *ptr)
{
    if (ptr != NULL)
    {
        inorder(ptr->left);
        printf("%d ", ptr->data);
        inorder(ptr->right);
    }
}

void postorder(struct node *ptr)
{
    if (ptr != NULL)
    {
     postorder(ptr->left);
     postorder(ptr->right);
     printf("%d ", ptr->data);
    }
}

void preorder(struct node *ptr)
{
    if (ptr != NULL)
    {
        printf("%d ", ptr->data);
        preorder(ptr->left);
        preorder(ptr->right);
    }
}

void output(struct node *ptr, int level)
{
    int i;
    if (ptr)
    {
        output(ptr->right, level + 1);
        printf("\n");
        for (i = 0; i < level; i++)
            printf("    ");
        printf("%d", ptr->data);
        output(ptr->left, level + 1);
    }
}

struct node* createNode()
{
    int choice;
    struct node *temp;
    temp = (struct node*)malloc(sizeof(struct node));
    
    printf("Enter data for the new node: ");
    scanf("%d", &temp->data);
    
    printf("want to create a left node for %d (1 for yes, 0 for no): ", temp->data);
    scanf("%d", &choice);
    
    if (choice == 1)
    {
        temp->left = createNode();
    }
    else
    {
        temp->left = NULL;
    }

    printf("want to create a right node for %d (1 for yes, 0 for no): ", temp->data);
    scanf("%d", &choice);

    if (choice == 1)
    {
        temp->right = createNode();
    }

    else
    {
        temp->right = NULL;
    }
    return temp;
} 

int main(){
    root = createNode();
    output(root, 0);
}