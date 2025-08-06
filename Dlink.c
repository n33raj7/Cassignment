#include <stdio.h>
#include <stdlib.h>

struct Dlink {
    struct Dlink *prev;
    int data;
    struct Dlink *next;
};

typedef struct Dlink Dnode;

Dnode *lp = NULL, *rp = NULL;  

int create(Dnode *ptr) {
    int ch, num = 0;
    lp = ptr;
    lp->prev = NULL;

    do {
        printf("Enter the data: ");
        scanf("%d", &ptr->data);

        printf("For continue press 1: ");
        scanf("%d", &ch);

        num++;

        if (ch == 1) {
            ptr->next = (Dnode *)malloc(sizeof(Dnode));
            if (ptr->next == NULL) {
                printf("Memory allocation failed\n");
                exit(1);
            }
            ptr->next->prev = ptr;
            ptr = ptr->next;
        }

    } while (ch == 1);

    ptr->next = NULL;
    rp = ptr; 
    printf("Total number of nodes: %d\n", num);

    return num;
}

void display(Dnode *ptr) {
    if (ptr == NULL) {
        printf("List is empty\n");
        return;
    }
    if(ptr->prev == NULL) {
    printf("Doubly linked list: ");
    while (ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }}
    else if(ptr->next == NULL) {
        printf("Doubly linked list in reverse: ");
        while (ptr != NULL) {
            printf("%d ", ptr->data);
            ptr = ptr->prev;
        }
    }

    printf("\n");
}

void insertEnd(Dnode *ptr) {
    Dnode *newnode = (Dnode *)malloc(sizeof(Dnode));
    int ch;

    do {
        printf("Enter data to insert at end: ");
        scanf("%d", &newnode->data);

        if(ptr == NULL) {
            lp = newnode;
            rp = newnode;
            newnode->prev = NULL;
            newnode->next = NULL;    
        }
        else {
            newnode->prev = rp;
            newnode->next = NULL;
            rp->next = newnode;
            rp = newnode; 
        }
        printf("For continue press 1: ");
        scanf("%d", &ch);


    } while(ch == 1);
}


void insertBeginning(){
    int ch;
    Dnode *newnode = (Dnode *)malloc(sizeof(Dnode));
    printf("Enter data to insert at beginning: ");
    scanf("%d", &newnode->data);

    do
    {if(lp == NULL) {
        newnode->prev = NULL;
        newnode->next = NULL;
        lp = newnode;
        rp = newnode; 
    } else {
        newnode->next = lp;
        newnode->prev = NULL;
        lp->prev = newnode;
        lp = newnode; 
    }
        printf("For continue press 1: ");
        scanf("%d", &ch);
    } while(ch == 1);
}

void insertAtPosition() {
    int pos, i;
    printf("Enter the position to insert: ");
    scanf("%d", &pos);

    if(pos < 1) {
        printf("Invalid position. Position should be >= 1.\n");
        return;
    }

    Dnode *newnode = (Dnode *)malloc(sizeof(Dnode));
    printf("Enter data: ");
    scanf("%d", &newnode->data);
    newnode->next = NULL;

    if(pos == 1) {
        newnode->prev = NULL;
        newnode->next = lp;
        if(lp != NULL) {
            lp->prev = newnode;
        }
        lp = newnode;
        if(rp == NULL) {
            rp = newnode; 
        }
        return;
    }

    Dnode *curr = lp;
    for(i = 1; i < pos-1 && curr != NULL; i++) {
        curr = curr->next;
    }

    if(curr == NULL) {
        printf("Position is beyond the length of the list.\n");
        free(newnode);
        return;
    }

    newnode->next = curr->next;
    newnode->prev = curr;

    if(curr->next != NULL) {
        curr->next->prev = newnode;
    } else {
        rp = newnode; 
    }
    
    curr->next = newnode;
}

void deleteBeginning() {
    if(lp == NULL) {
        printf("List is empty\n");
        return;
    }

    Dnode *temp = lp;
    lp = lp->next;

    if(lp != NULL) {
        lp->prev = NULL;
    } else {
        rp = NULL; 
    }

    free(temp);
}
void deleteEnd() {
    if(rp == NULL) {
        printf("List is empty\n");
        return;
    }

    Dnode *temp = rp;
    rp = rp->prev;

    if(rp != NULL) {
        rp->next = NULL;
    } else {
        lp = NULL; 
    }

    free(temp);
}

void deleteSpecificNode() {
    int pos, i;
    printf("Enter the position to delete: ");
    scanf("%d", &pos);

    if(pos < 1) {
        printf("Invalid position. Position should be >= 1.\n");
        return;
    }

    if(lp == NULL) {
        printf("List is empty. Nothing to delete.\n");
        return;
    }

    if(pos == 1) {
        deleteBeginning();
        return;
    }

    Dnode *curr = lp;
    for(i = 1; i < pos && curr != NULL; i++) {
        curr = curr->next;
    }

    if(curr == NULL) {
        printf("Position is beyond the length of the list.\n");
        return;
    }

    if(curr->prev != NULL) {
        curr->prev->next = curr->next;
    }
    
    if(curr->next != NULL) {
        curr->next->prev = curr->prev;
    } else {
        rp = curr->prev; 
    }

    free(curr);
}


int main() {
    Dnode *head = (Dnode *)malloc(sizeof(Dnode));
    if (head == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    int ch;
    do {
        printf("1. Create Doubly Linked List\n");
        printf("2. Display Doubly Linked List\n");
        printf("3. Display Doubly Linked List in Reverse\n");
        printf("4. Insert at End\n");
        printf("5. Insert at Beginning\n");
        printf("6. Insert at Specific Position\n");
        printf("7. Delete from Beginning\n");
        printf("8. Delete from End\n");
        printf("9. Delete Specific Node\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);   

    switch(ch) {
            case 1:
                create(head);
                break;
            case 2:
                display(lp);
                break;
            case 3:
                display(rp);
                break;
            case 4:
                insertEnd(lp);
                break;
            case 5:
                insertBeginning();
                break;
            case 6:
                insertAtPosition();
                break;
            case 7:
                deleteBeginning();
                break;
            case 8:
                deleteEnd();
                break;
            case 9:
                deleteSpecificNode();
                break;
            case 0:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice\n");
        }
    } while(ch != 0);
}
