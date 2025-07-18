#include<stdio.h>

int main(){

    int ar1[3][3], ar2[3][3];

    printf("Enter elements of first matrix: \n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("enter the value at %d%d position: ", i, j);
            scanf("%d", &ar1[i][j]);
        }
    }

    // printf("Enter elements of second matrix: \n");
    // for(int i = 0; i < 3; i++){
    //     for(int j = 0; j < 3; j++){
    //         printf("enter the value at %d%d position: ", i, j);
    //         scanf("%d", &ar2[i][j]);
    //     }
    // }

    int rowSum[3];
    for(int i = 0; i < 3; i++){
           rowSum[i] = ar1[i][0] + ar1[i][1] + ar1[i][2];
    }
    printf("Sum of each row:\n");
    for(int i = 0; i < 3; i++){
        printf("%d\n", rowSum[i]);
    }
    }
