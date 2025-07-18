#include<stdio.h>
#include<string.h>
int main()
{
    char nm[10][20];
    for(int i = 0; i < 10; i++)
    {
        printf("Enter name %d: ", i + 1);
        scanf("%s", nm[i]);
    }

    for(int i = 0; i < 10; i++)
    {
        for(int j = i + 1; j < 10; j++)
        {
            if(strcmp(nm[i], nm[j]) == 0 && nm[i][0] != '\0')
            {
                int k = 0;
                printf("Duplicate name found: %s\n", nm[j]);
                
                while(nm[j][k] != '\0')
                {
                    nm[j][k] = '\0';
                    k++;
                }
            }
        }
    }


printf("\nSorted names: \n");

    for(int i = 0; i < 10; i++)
    {
        if(nm[i][0] != '\0' ){
            printf("%s\n", nm[i]);
        }
    }

    return 0;
}
