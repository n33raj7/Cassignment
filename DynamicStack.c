#include<stdio.h>

struct stack {
    int data;
    struct stack *next;
};

struct stack *top = NULL;

void push(){
    int data;
    printf("Enter data to push: ");
    scanf("%d", &data);

    struct stack *new_node = (struct stack *)malloc(sizeof(struct stack));
     
    new_node->data = data;
    new_node->next = top;
    top = new_node;
}

void pop(){
    if(top == NULL){
        printf("Stack underflow\n");
    } else {
        top = top->next;
        free(top->next);
        top->next = NULL;
        if(top != NULL)
            printf("Popped element %d\n", top->data);
        else
            printf("Stack is now empty\n");

    }
}

void peek(){
    if(top == NULL){
        printf("Stack is empty\n");
    } else {
        printf("Top element is %d\n", top->data);
    }
}

void updateatposition(){
    int pos, data;
    printf("Enter the position to update: ");
    scanf("%d", &pos);

    if(pos < 1) {
        printf("Invalid position. Position should be >= 1.\n");
        return;
    }
    if(top == NULL) {
        printf("Stack is empty. Nothing to update.\n");
        return;
    }
    struct stack *curr = top;
    for(int i = 1; i < pos && curr != NULL; i++) {
        curr = curr->next;
    }
    if(curr == NULL) {
        printf("Position is beyond the length of the stack.\n");
        return;
    }
    printf("Enter new data: ");
    scanf("%d", &data);
    curr->data = data;
    printf("Data at position %d updated to %d\n", pos, data);

}

void display(){
    if(top == NULL) {
        printf("Stack is empty\n");
    } else {
        struct stack *curr = top;
        printf("Stack elements are: ");
        while(curr != NULL) {
            printf("%d ", curr->data);
            curr = curr->next;
        }
        printf("\n");
    }
}




int main()
{
    int choice;
    do {
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Update at Position\n");
        printf("5. Display\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                updateatposition();
                break;
            case 5:
                display();
                break;
            case 6:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while(choice != 6);

    return 0;
}