#include<stdio.h>
int main()
{
    printf("enter the size of array: ");
    int len, temp;
    scanf("%d", &len);
    int arr[len];
    printf("\nenter the array element: ");
    for(int i = 0; i < len; i++)
    {
        scanf("%d", &arr[i]);
    }

    // for(int i = 0; i < len - 1; i++)
    // {
    //     for(int j = 0; j < len - i - 1; j++)
    //     {
    //         if(arr[j] > arr[j + 1])
    //         {
    //             temp = arr[j];
    //             arr[j] = arr[j + 1];
    //             arr[j + 1] = temp;
    //         }
    //     }
    // }
    int *p = &arr[0];
    for(int i = 0; i < len - 1; i++)
    {
        for(int j = 0; j < len - i - 1; j++)
        {
            if(*(p + j) > *(p + j + 1))
            {
                temp = *(p + j);
                *(p + j) = *(p + j + 1);
                *(p + j + 1) = temp;
            }
            
        }
    }
}