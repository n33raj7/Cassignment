#include <stdio.h>
#include <stdlib.h>
#define SIZE 12

int cq[SIZE];
int front = -1;
int rear = -1;

void enqueue() {
    int data;
    printf("Enter the element you want to add to the queue: ");
    scanf("%d", &data);

    // Check if full
    if ((rear + 1) % SIZE == front) {
        printf("Queue is full\n");
        return;
    }

    if (front == -1) { 
        front = 0;
        rear = 0;
    } else {
        rear = (rear + 1) % SIZE;
    }

    cq[rear] = data;
    printf("Element %d added to the queue\n", data);
}

void dequeue() {
    if (front == -1) {
        printf("Queue Underflow.\n");
        return;
    }

    printf("Dequeued: %d\n", cq[front]);

    if (front == rear) { // only one element
        front = -1;
        rear = -1;
    } else {
        front = (front + 1) % SIZE;
    }
}

void Display() {
    if (front == -1) {
        printf("Queue is empty\n");
        return;
    }

    printf("Queue elements:\n");
    int i = front;
    while (1) {
        printf("%d\n", cq[i]);
        if (i == rear)
            break;
        i = (i + 1) % SIZE;
    }
}

int main() {
    int choice;
    do {
        printf("\n1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: enqueue(); break;
            case 2: dequeue(); break;
            case 3: Display(); break;
            case 4: printf("Exiting...\n"); break;
            default: printf("Invalid choice. Please try again.\n");
        }
    } while(choice != 4);

    return 0;
}
