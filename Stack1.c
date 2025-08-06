#include<stdio.h>
#define SIZE 10

int stk[SIZE];
int top = -1;

void push(int data){
    if(top == SIZE - 1){
        printf("stack overflow zala");
    }
    else{
        top++;
        stk[top] = data;
        printf("pushed %d\n", data);
        
        
    }
}

void updateatposition(){
    int pos, data;
    printf("Enter the position to update: ");
    scanf("%d", &pos);

    if(pos < 1 || pos > top + 1) {
        printf("Invalid position. Position should be between 1 and %d.\n", top + 1);
        return;
    }

    printf("Enter new data: ");
    scanf("%d", &data);
    stk[pos - 1] = data;
    printf("Data at position %d updated to %d\n", pos, data);
}


void display(){
    if(top < 0){
        printf("stack is empty");
    }
    else{
        printf("stack elements are: ");
        for(int i = top; i >= 0; i--){
            printf("%d ", stk[i]);
        }
        printf("\n");
    }
}

void peek(){
    if(top < 0){
        printf("stack is empty");
    }
    else{
        printf("top element is: %d\n", stk[top]);
    }
}

void size(){
    int count = 0;
    if(top < 0){
        printf("stack is empty");
    }
    else {
        for(int i = top; i >= 0; i--){
            count ++;
        }
        printf("Number of elements in stack: %d\n", count);
    }

}




void pop(){
    if(top < 0){
        printf("stack underflow zala");
    }
    else{
        printf("popped %d\n", stk[top]);
        top--;
    }
}

void PopSpecific(){
    int pos;
    printf("Enter the position to pop: ");
    scanf("%d", &pos);
    int temp[SIZE];
    int i,j;
    if(pos < 1 || pos > top + 1) {
        printf("Invalid position. Position should be between 1 and %d.\n", top + 1);
        return;
    }
    if(pos == 1) {
        pop();
        return;
    }
    for( i = top,  j= 0; i >= pos; i--, j++){
        temp[j] = stk[i];
    }
    for( i = pos - 1,  j = 0; i < top; i++, j++){
        stk[i] = temp[j];
    }
    top--;
    printf("Popped element at position %d\n", pos);
}

void SpecificPush(){
    int pos, data;
    printf("Enter the position to push: ");
    scanf("%d", &pos);

    if(pos < 1 || pos > top + 2) {
        printf("Invalid position. Position should be between 1 and %d.\n", top + 2);
        return;
    }

    printf("Enter data to push: ");
    scanf("%d", &data);
    if(pos == 1) {
        push(data);
        return;
    }
    for(int i = top; i >= pos - 1; i--) {
        stk[i + 1] = stk[i];
    }
    stk[pos - 1] = data;
    top++;
}


int main()
{
    int ch, data;
    do {
        printf("1. Push\n2. Pop\n3. Display\n4. Display Top\n5. Size\n6. Update\n7. Pop Specific\n8. Specific Push\n9. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);
        
        switch(ch) {
            case 1:
                printf("Enter data to push: ");
                scanf("%d", &data);
                push(data);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                peek();
                break;
            case 5:
                size();
                break;
            case 6:
                updateatposition();
                break;
            case 7:
                PopSpecific();
                break;
            case 8:
                SpecificPush();
                break;
            case 9:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice, please try again.\n");
        }
    } while(ch != 5);
}