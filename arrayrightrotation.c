#include<stdio.h>

int main()
{
    
    
    int arr[100];
    int size;

    printf("enter the sizeof the array: ");
    scanf("%d", &size);

    printf("\nEnter the elements in the array: \n");
    for(int i=0; i<size; i++)
    {
        printf("%d: ", i+1);
        scanf("%d", &arr[i]);
    }
    int iterations;
    printf("\nEnter the number of rotations: ");
    scanf("%d", &iterations);

    for (int i = 0; i < iterations; i++)
    {
        int temp = arr[0];
        for (int j = 0; j < size - 1; j++)
        {
            arr[j] = arr[j + 1];
        }
        arr[size - 1] = temp;

    }

    printf("\nthe resultant array is: \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }



    
}