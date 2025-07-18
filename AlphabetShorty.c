#include<stdio.h>
#include<ctype.h>
int main(){
    char arr[10] = {'d','A','G','h','j','k','l','B','c','E'};
    int len =10;
    
    for(int i = 0; i < len; i++) {
        arr[i] = tolower((unsigned char)arr[i]);
    }

    
    char temp;
    char *p = &arr[0];
    for(int i = 0; i < len - 1; i++)
    {
        for(int j = 0; j < len - i - 1; j++)
        {
            if(*(p + j) > *(p + j + 1))
            {
                temp = *(p + j);
                *(p + j) = *(p + j + 1);
                *(p + j + 1) = temp;
            }
            
        }
        
    }

    printf("after sorting array : ");
        for(int k = 0; k < len; k++)
        {
            printf("%c ", *(p + k));
        }
}