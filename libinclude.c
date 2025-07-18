#include<stdio.h>
#include"C:\\Users\\rajpu\\Desktop\\c\\lib.h"

int main(){

    int a[10]; int i, fl;
    for(int i=0; i<10; i++){
        printf("Enter element %d: ", i+1);
        scanf("%d", &a[i]);
    }

    int fl = large(a, 10);
    printf("Largest element is: %d\n", fl);
    return 0;

}