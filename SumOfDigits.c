// sum of the digits of a num
#include <stdio.h>

int main() {

    int n, sum = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
   
    if (n < 0) {
        printf("Please enter a positive integer.\n");
        return 1; // Exit with an error code
    }
    while (n != 0) {
        sum += n % 10;
        n/= 10;
    }

    printf("Sum of digits: %d\n", sum);
    return 0;
}