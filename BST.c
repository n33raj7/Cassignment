#include<stdio.h>
#include<stdlib.h>

struct Node {
    int info;
    struct Node *left_child;
    struct Node *right_child;
};

struct Node* Create_Tree(int , struct Node* );

void Output(struct Node*,int );

struct Node* Create_Tree(int info, struct Node* node)
{
    if(node == NULL)
    {
        node = (struct Node*)malloc(sizeof(struct Node));
        node->info = info;
        node->left_child = NULL;
        node->right_child = NULL;
        return node;
    }
    if(node->info >= info)
    {
        node->left_child = Create_Tree(info, node->left_child);
    }
    else
    {
        node->right_child = Create_Tree(info, node->right_child);
    }
    return node;
}

void Output(struct Node* t, int level)
{
    if(t)
    {
        Output(t->right_child, level + 1);
        printf("\n ");
        for(int i = 0; i < level; i++)
        {
            printf("   ");
        }
        printf("%d\n", t->info);
        Output(t->left_child, level + 1);
    }
}
int main(){
    struct Node* root = NULL;
    int choice, value;
    do {
        printf("1. Insert\n2. Display\n3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                printf("Enter value to insert: ");
                scanf("%d", &value);
                root = Create_Tree(value, root);
                break;
            case 2:
                Output(root, 0);
                break;
            case 3:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while(choice != 3);
    return 0;
}