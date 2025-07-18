#include<stdio.h>
#include"C:\\Users\\rajpu\\Desktop\\c\\str.h"
int main()
{
    char a[100], b[100];
    int n = 1;
    printf("Enter the first string: ");
    gets(a);
    printf("Enter the second string: ");
    gets(b);

    n = cmpstr(a, b);

    if (n == 0) {
        printf("The strings are not equal.\n");
    } else {
        printf("The strings are equal.\n");
    }
}