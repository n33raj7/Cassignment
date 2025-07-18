#include<stdio.h>

int main() {
    int a = 2000, *p, *k, **j;
    p = &a;  // p points to a
    *p = *p + 4000;
    k = p;  // k points to the same location as p
    *k = *k + 5000;
    j = &k;  // j points to k
    **j = **j + 5000;
    printf("%d\n", a);  // Output the value of a
    printf("%d\n", *p);  // Output the value pointed to by p
    printf("%d\n", *k);  // Output the value pointed to by k
    printf("%d\n", **j);  // Output the value pointed to by j

    printf(" \n Address \n");
    printf("Add of a: %u\n", &a);  // Output the address of a
    printf("Add of p: %u\n", p);  // Output the address of p
    printf("Add of k: %u\n", k);  // Output the address of k
    printf("Add of j: %u\n", *j);  // Output the address
    
    return 0;


}


