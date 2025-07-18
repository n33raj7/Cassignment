#include<stdio.h>


    int addth(int arr[10])
    {
        for(int i = 0; i < 10; i++){
            arr[i] = arr[i] + 1000;
        }

    }

int main(){
   int ar1[10] = {12,22,32,42,52,62,72,82,92,102};

    addth(ar1);
    printf("The elements of the array are: \n");
    for(int i = 0; i < 10; i++){
        printf("%d ", ar1[i]);
    }
}