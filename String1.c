#include<stdio.h>

int main() {
    char nm[20], sn[20];

    printf("Enter name: ");
    //scanf("%s", nm);
    gets(nm); 
    printf("Enter surname: ");
    //scanf("%s", sn);
    gets(sn);
    printf("Hello %s %s\n", nm, sn);

    
}