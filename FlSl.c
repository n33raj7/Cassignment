#include<stdio.h>
int main() {
    int a [10],i, fl;
    char *p = a; 
    printf("Enter 10 integers:\n");

    for(i = 0; i < 10; i++) 
    {
        scanf("%d",&a[i]); 
    }

    printf("The largest number is: ");
    fl = a[0];

    for (i = 0; i < 10; i++) {
        
        if (fl< a[i]) 
        {
            fl = a[i];
        }
    }
 printf("%d ", fl);
    return 0;
}