#include<stdio.h>
int BinarySearch(int arr[], int size, int key){
    
    int left = 0, right = size - 1;
    
    while(left <= right)
    {
        int middle = (left + right) / 2;
        if(arr[middle] == key)
        {
            return middle;
        }else if(key < arr[middle])
        {
            right = middle - 1;
        }else
        {
            left = middle + 1;
        }
    }
    return -1;
}

int main(){
    int i;
    int arr[10] = {0,1,2,3,4,5,6,7,8,9};
    printf("enter the element to find: ");
    scanf("%d",&i);
    int index = BinarySearch(arr, 10, i);
    if(index != -1)
    {
        printf("Element found at index: %d\n", index);
    }
    else
    {
        printf("Element not found\n");
    }
}
