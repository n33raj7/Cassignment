#include<stdio.h>

int main(){
    int arr[100];
    int index, i, temp,size, n;
    printf("enter the sizeof the array: ");
    scanf("%d", &size);

    printf("\nEnter the elements in the array: \n");
    for(i=0; i<size; i++)
    {
        printf("%d", i);
        scanf("%d", &arr[i]);
    }


    printf("index: ");
    scanf("%d", &index);
    printf("enter the val: ");
    scanf("%d", &temp);

    index--;

    for(i = size; i > index - 1; i--)
    {
        arr[i+1] = arr[i];
    }

    size++;
    arr[index] = temp;

    printf("the resultant array is: \n");
    for(i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}