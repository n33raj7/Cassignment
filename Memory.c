#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p;
    p = (int*)malloc(100 * sizeof(int));

    for(int i = 0; i < 100; i++) {

        *(p + i) = 1+i;
    }
    

    for(int i = 0; i < 100; i++) {
        printf("values: \n");
        printf("%d \n", *(p + i));
    }
    return 0;
}