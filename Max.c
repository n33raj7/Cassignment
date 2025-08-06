#include<stdio.h>

int main()
{
    int arr[6] = {36, 78, 342, 99, 87, 63};
    int size = 6;
    int max = 0;
    
    for(int i = 0; i < size; i++)
    {    
        int temp = 0;
        int num = arr[i];
        while (num > 0)
        {
            temp += num%10;
            num /= 10;
        }

        if(temp > max)
        {
            max = temp;
        }
    }

    if(max == 0)
    {
        printf("No maximum value found.\n");
    }
    else
    {
        printf("The maximum value in the array is: %d\n", max);
    }



}