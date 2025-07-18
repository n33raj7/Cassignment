#include<stdio.h>
#include<stdlib.h>

int main(){
    
    int arr[20], len = 20, val;

//generate an array with 20 random number under 40 such that no number is repeated
    for(int i = 0; i < len; i++) {
        int randomNum;
        int isUnique;
        do {
            isUnique = 1;
            randomNum = rand() % 40; // Generate a random number between 0 and 39
            for(int j = 0; j < i; j++) {
                if(arr[j] == randomNum) {
                    isUnique = 0; // Number already exists in the array
                    break;
                }
            }
        } while(!isUnique);
        arr[i] = randomNum;
    }

    printf("Generated array with unique random numbers:\n");
    for(int i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;











    
}