#include <stdio.h>
#include <stdlib.h>

struct link {
    int data;
    struct link *next;
};

typedef struct link node;
node *start = NULL;
node *end = NULL;

void insertfirst() {
    node *ptr = (node *)malloc(sizeof(node));
    printf("data: ");
    scanf("%d", &ptr->data);

    if(start == NULL) {
        ptr->next = NULL;
        start = ptr;
        end = ptr;
    } else {
        ptr->next = start;
        start = ptr;
    }
}

void insert() {
    int choice;
    node *ptr;

    do {
        ptr = (node *)malloc(sizeof(node));
        printf("data: ");
        scanf("%d", &ptr->data);
        ptr->next = NULL;

        if(start == NULL) {
            start = ptr;
            end = ptr;
        } else {
            end->next = ptr;
            end = ptr;
        }

        printf("Do you want to add another node? (1 for Yes, 0 for No): ");
        scanf("%d", &choice);
    } while(choice == 1);
}


void insertsecond()
{
    if(start == NULL ) {
        printf("List is empty. insert at first position first.\n");
    }else
    {
        node *ptr = (node *)malloc(sizeof(node));
        printf("data: ");
        scanf("%d", &ptr->data);
        ptr->next = NULL;

        ptr->next = start->next;
        start->next = ptr;
        if(ptr->next == NULL) {
            end = ptr;
        }
    }
}

    void insertspecific() 
    {
        int pos, i;
        printf("Enter the position to insert: ");
        scanf("%d", &pos);

        if(pos < 1) {
            printf("Invalid position. Position should be >= 1.\n");
            return;
        }

        
        if(pos == 1) {
            insertfirst();
            return;
        }

        
        node *ptr = (node *)malloc(sizeof(node));
        printf("data: ");
        scanf("%d", &ptr->data);
        ptr->next = NULL;

        node *curr = start;

        
        for(i = 1; i < pos-1 && curr != NULL; i++) {
            curr = curr->next;
        }

        if(curr == NULL) {
            printf("Position is beyond the length of the list.\n");
            free(ptr);
            return;
        }

        
        ptr->next = curr->next;
        curr->next = ptr;

        
        if(ptr->next == NULL) {
            end = ptr;
        }

    }


    void deletehead(){
    if(start == NULL) {
        printf("List is empty. Nothing to delete.\n");
        return;
    }
    node *temp = start;
    start = start->next;
    if(start == NULL) {
        end = NULL; 
    }

    free(temp);
    }





void display() {
    node *ptr = start;
    if(ptr == NULL) {
        printf("List is empty.\n");
        return;
    }

    printf("Linked List: ");
    while(ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

void deleteLast() {
    if(start == NULL) {
        printf("List is empty. Nothing to delete.\n");
        return;
    }

    if(start == end) {
        free(start);
        start = NULL;
        end = NULL;
        return;
    }

    node *temp = start;
    while(temp->next != end) {
        temp = temp->next;
    }
    free(end);
    end = temp;
    end->next = NULL;
}

void deleteSpecific(){
    int pos, i;
    printf("Enter the position to delete: ");
    scanf("%d", &pos);

    if(pos < 1) {
        printf("Invalid position. Position should be >= 1.\n");
        return;
    }

    if(pos == 1) {
        deletehead();
        return;
    }

    node *curr = start;
    node *prev = NULL;
    for(i = 1; i < pos && curr != NULL; i++) {
        prev = curr;
        curr = curr->next;
    }

    if(curr == NULL) {
        printf("Position is beyond the length of the list.\n");
        return;
    }

    prev->next = curr->next;
    free(curr);

    if(prev->next == NULL) {
        end = prev;
    }
    if(start == NULL) {
        end = NULL; 
    }
}


void reverseList() {
    if(start == NULL || start->next == NULL) {
        return; 
    }

    node *prev = NULL;
    node *curr = start;
    node *next = NULL;
    end = start; 

    while(curr != NULL) {
        next = curr->next;   
        curr->next = prev;   
        prev = curr; 
        curr = next;
    }

    start = prev;
    end->next = NULL;  
}

void SelectionSort(){
    node *ptr = start;
    node *temp = NULL;

    for(;ptr != NULL; ptr = ptr->next){
        temp = ptr->next;
        for(; temp != NULL; temp = temp->next){
            if(ptr->data ){
                
            }
        }
    }

    
}


int main() {
    int ch;

    do {
        printf("\n1. Insert at End\n2. Display\n3. Insert at First\n4. Insert at Second Position\n5. Insert at Specific Position\n6. Delete Head\n7. Delete Last\n8. Delete Specific Position\n9. Reverse List\n10. Selection Sort\n0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch(ch) {
            case 1:
                insert();
                break;
            case 2:
                display();
                break;
            case 3:
                insertfirst();
                break;
            case 4:
                insertsecond();
                break;
            case 5:
                insertspecific();
                break;
            case 6:
                deletehead();
                break;
            case 7:
                deleteLast();
                break;
            case 8:
                deleteSpecific();
                break;
            case 9:
                reverseList();
                break;
            case 10:
                SelectionSort();
            case 0:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice\n");
        }
    } while(ch != 0);

    return 0;
}
