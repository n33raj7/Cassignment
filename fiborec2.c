#include<stdio.h>

int k,f=-1,p = 1, t, ct;

void fibo(int k)
{
    if(k>0){
        fibo(k - 1);
        t = f + p;
        printf ("%d, ", t);
        f = p;
        p = t;
        
    }
    }


int main ()
{
    printf("enter the value of k: ");
    scanf("%d", &k);
    printf("Fibonacci series: ");
    fibo(k);
    return 0;

}