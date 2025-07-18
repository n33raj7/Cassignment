#include<stdio.h>

int main()
{
    int arr[10] = {1,2,3,4,5,3,7,8,9,3}, len = 10, val;
    int *p;
    printf("enter the vale to find: \n");
    scanf("%d", &val); 

    p = &arr[0];

    printf("value found at index: ");
    for(int i=0;i<len;i++)
    {
        
        if (*p == val)
        {
            printf("%d, ", i);
            p++;
        }
        else{
            p++;
        }

        

    }
        printf("WANT TO CHANGE THE VALUE? (y/n): ");
        char choice;
        scanf(" %c", &choice);
        if (choice == 'y' || choice == 'Y')
        {
            printf("Enter the index to change: ");
            int index;
            scanf("%d", &index);
            if (index >= 0 && index < len)
            {
                printf("Enter the new value: ");
                int newValue;
                scanf("%d", &newValue);
                arr[index] = newValue;
                printf("Value at index %d changed to %d\n", index, newValue);
            }
            else
            {
                printf("Index out of bounds.\n");
            }

}

