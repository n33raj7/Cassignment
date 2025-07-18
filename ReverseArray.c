#include<stdio.h>

int main(){

    int arr[10] = {1,2,3,4,5,6,7,8,9,10}, len = 10;

    int *p = &arr[0];
    int *k = &arr[len - 1];
    // for(int i = 0; i < len - 1; i++)
    // {
    //     for(int j = 0; j < len - i - 1; j++)
    //     {
    //         {
    //             int temp = *(p + j);
    //             *(p + j) = *(p + j + 1);
    //             *(p + j + 1) = temp;
    //         }
            
    //     }
    // }

    while(p<k){
        int temp = *p;
        *p = *k;
        *k = temp;
        p++;
        k--;

    }

    for(int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
    
    }
