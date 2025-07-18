#include<stdio.h>
int main(){

    int ar1[3][3], ar2[3][3];

    printf("Enter elements of first matrix: \n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
        printf("enter the value at %d%d position",i ,j);
        scanf("%d", &ar1[i][j]);
        }

    }
printf("Enter elements of second matrix: \n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
        printf("enter the value at %d%d position", i ,j);
        scanf("%d", &ar2[i][j]);
        }

    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
          ar1[i][j] += ar2[i][j];
            
        }
    }

    printf("The sum of the two matrices is: \n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ", ar1[i][j]);
        }
        printf("\n");
    }
}