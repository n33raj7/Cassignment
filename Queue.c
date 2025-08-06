#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define SIZE 10

int ch;
int q[SIZE];

int rear = -1;
int front = -1;

void enqueue();
void dequeue();
void display();

void enqueue()
{
    int data;
    printf("Enter the element you wanna add to the queue: ");
    scanf("%d", &data);

    if(rear < SIZE){
        rear++;
        q[rear] = data;

        if(front == -1){
            front = 0;
        }
        
    }
    else {
        printf("\n Queue Overflow.");


    }
}

void dequeue(){
    if (front == -1){
        printf("Queue Underflow.");
        return;
    }
    else{
        printf("Element %d is removed from the queue.\n", q[front]);
        if(front == rear){
            front = -1;
            rear = -1;
        }
        else{
            front++;
        }


    }
}
void display(){
    if(front == -1){
        printf("Queue is empty.\n");
        return;
    }
    else{
        printf("Elements in the queue are: ");
        for(int i = front; i <= rear; i++){
            printf("%d ", q[i]);
        }
        printf("\n");
    }
}

int main()
{
    int choice;
    while(1){
        printf("\nMenu:\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}