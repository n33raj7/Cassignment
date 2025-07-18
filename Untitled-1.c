#include<stdio.h>
#include"C:\\Users\\rajpu\\Desktop\\c\\str.h"
int main() 
{
char a[30], b[12];
    printf("Enter name: ");
    gets(a);
    copystr(a, b);
    printf("The copied string is: %s\n", b);

}
