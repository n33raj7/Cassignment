#include<stdio.h>
int main()
{
    char ref[100] = {"raj neeraj rajput viraj"}, ser[100];
    int i;
    
    printf("Enter the string to be searched: ");
    gets(ser);

    for(i = 0; ref[i] != '\0'; i++) 
    {
        for(int j = 0; ser[j] != '\0'; j++) 
        {
            if(ref[i] == ser[j] && ref[i] != ' ') 
            {
                printf("Character '%c' found at position %d in the reference string.\n", ser[j], i);
                break; 
            }
        }
        
    }
}