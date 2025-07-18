#include<stdio.h>
#include<stdlib.h>

int main(){

    struct node {
        int data;
        struct node *next;
    };

    struct node *head = NULL;
    struct node *second = NULL;

    head = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));


    if (head != NULL) {
        printf("Memory allocated\n");
    }
    


    head->data = 10;
    head->next = second;
    second->data = 20;  
    second->next = NULL;
    
    if (second != NULL) {
        printf("Memory allocated for second node\n");
    }

    printf("Data in first node: %d\n", head->data);
    printf("Data in second node: %d\n", second->data);  
    printf("head points to first node: %p\n", (void*)head);
    printf("second points to second node: %p\n", (void*)second);
    printf("Next of first node points to second node: %p\n", (void*)head->next);    

}