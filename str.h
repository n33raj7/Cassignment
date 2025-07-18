int lenstr(char *s) {
    int count = 0;
    while (*s != '\0') {
        count++;
        s++;
    }
    return count;

}


void copystr(char *p, char *k){
    while (*p != '\0') {
        *k = *p;
        k++;
        p++;
    }
    *k = '\0';
}


void strrev(char *p ){
    /*char arr[]*/
    // int len = lenstr(arr);
    // char *p = arr;
    // char *k = &arr[len - 1];
    char *k;
    k = p;
    while(*k != '\0'){
        k++;
    }
    --k;
    while(p<k){
        int temp = *p;
        *p = *k;
        *k = temp;
        p++;
        k--;
    }
}


void reverseWords(char *p)
{
    char temp;

    while (*p != '\0') 
    {
        while (*p == ' ' && *p != '\0') {
            p++;
        }

        char *j = p;

        while (*j != ' ' && *j != '\0') {
            j++;
        }
        char *end = j - 1;

        char *start = p;
        while (start < end) {
            temp = *start;
            *start = *end;
            *end = temp;
            start++;
            end--;
        }
        p = j;
    }
}


void strupr(char *p)
{
    while (*p != '\0') {
        if (*p >= 'a' && *p <= 'z') {
            *p -= 'a' - 'A';
        }
        p++;
    }
    *p = '\0';
}


void strlwr(char *p)
{
    while (*p != '\0') {
        if (*p >= 'A' && *p <= 'Z') {
            *p += 'a' - 'A';
        }
        p++;
    }
    *p = '\0';
}

void exclwrupr(char *p) 
{
    while (*p != '\0') 
    {
        if (*p >= 'A' && *p <= 'Z') 
        {
            *p += 'a' - 'A';
        }
        else {
            if (*p >= 'a' && *p <= 'z') 
            {
                *p -= 'a' - 'A';
            }
        }
        p++;
    }
    *p = '\0';
   }
   
int countvowels(char *p) 
{
    int count = 0;
    while (*p != '\0') 
    {
        if (*p == 'a' || *p == 'e' || *p == 'i' || *p == 'o' || *p == 'u' ||
            *p == 'A' || *p == 'E' || *p == 'I' || *p == 'O' || *p == 'U') 
        {
            count++;
        }
        p++;
    }
    return count;
}


int cmpstr(char *p, char *k) 
{
    int n = 1;
    while (*p != '\0' || *k != '\0') 
    {
        if (*p - *k == 0 || *p - *k == 32 || *p - *k == -32) {
            p++;
            k++;
        } else {
            n = 0;
            break;
        }
            
    }
    return n;
}

void catstr(char *c, char *a, char *b){

}

