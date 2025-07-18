#include<stdio.h>
int demo(int x){
    if (x == 0 || x == 1) {
        return 1;
    } else {
        return x * demo(x - 1);
    }
}
void main() {
    int n, f;
    printf("Enter the value of N: ");
    scanf("%d", &n);
    f = demo(n);
    printf("The factorial of %d is %d\n", n, f);
}

