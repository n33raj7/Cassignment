#include<stdio.h>
#include<math.h>

int lenof(int n)
{
    int count = 0;
        while (n != 0 ) 
        { 
            count++;
            n /= 10;
        }
        return count;

}

int check(int n)
{
    int sum = 0;
    int len = lenof(n);
    while (n != 0 ) 
    {

        sum = n % 10;
        sum += pow(n, len);
        n /= 10;
    }
 return sum;
}


int main()
{
    int arr[100], n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Armstrong numbers in the array are: ");
    for (i = 0; i < n; i++)
    {
        if (check(arr[i]) == arr[i])
        {
            printf("%d, ", arr[i]);
        }
    }
    printf(" %d", lenof(n));
}