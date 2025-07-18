#include<stdio.h>
#include<string.h>
int main()
{
    char nm[5][20];
    for(int i = 0; i < 5; i++)
    {
        printf("Enter name %d: ", i + 1);
        scanf("%s", nm[i]);
    }

    for(int i = 0; i < 5; i++)
    {
        for(int j = i + 1; j < 5; j++)
        {
            if(strcmp(nm[i], nm[j]) > 0)
            {
                char temp[20];
                strcpy(temp, nm[i]);
                strcpy(nm[i], nm[j]);
                strcpy(nm[j], temp);
            }
        }
    }


printf("\nSorted names: \n");
    for(int i = 0; i < 5; i++)
    {
        printf("%s\n", nm[i]);
    }

    return 0;
}
