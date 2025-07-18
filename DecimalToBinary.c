#include<stdio.h>

int DectoBinary(int n);

int main() 
{
    int n;
    printf("Enter a decimal number: ");
    scanf("%d", &n);
    
    int result = 0, base = 1, zero = 0;
    while (n > 0) 
    {
        int a = n%2;
        if (a == 0){
            zero++;
        }
        n = n/2;
        result += a*base;
        base *= 10;
    }
    

    printf("the binary is: %d\n", result);
    printf("the no zeros is: %d", zero);
   
    
    
    return 0;
}

int DectoBinary(int n) 
{
    int result = 0, base = 1, zero = 0;
    while (n > 0) 
    {
        int a = n%2;
        if (a == 0){
            zero++;
        }
        n = n/2;
        result += a*base;
        base *= 10;
    }

    return result;
}