#include<stdio.h>
#include"C:\\Users\\rajpu\\Desktop\\c\\str.h"
int main() {
    char nm[20], sn[20];
    printf("Enter name: ");
    //scanf("%s", nm);
    gets(nm); 
    for(int i = 0; nm[i] != '\0'; i++) {
        printf("%c, ", nm[i]);
    }

    // printf("\n the length of the string is %d\n", lenstr(nm));
    // copystr(nm, sn);
    // strrev(nm);
    // puts(nm);// reverse
    // puts(sn);
    // reverseWords(nm);//rev of rev
    // puts(nm);


    exclwrupr(nm);
    puts(nm);
    strupr(nm);
    puts(nm);
    strlwr(nm);
    puts(nm);
    countvowels(nm);
    printf("Number of vowels: %d\n", countvowels(nm));

}
