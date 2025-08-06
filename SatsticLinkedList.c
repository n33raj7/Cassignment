#include<stdio.h>

struct link
{
    int data;
    struct link *next;
};

struct link *start,*ptr, node1, node2, node3;

int main(){

    start = &node1;
    printf("data: ");
    scanf("%d", &node1.data);
    node1.next = &node2;

    printf("data: ");
    scanf("%d", &node2.data);
    node2.next = &node3;

    printf("data: ");
    scanf("%d", &node3.data);
    node3.next = NULL;

    ptr = start;
    while(ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }

    return 0;
}
