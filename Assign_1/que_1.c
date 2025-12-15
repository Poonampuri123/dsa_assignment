//Write a linear search algorithm to return index of last occurance of key.

#include<stdio.h>
#define SIZE 9

int linear_search(int *arr , int key);
int main(){

    int key;
    int arr[SIZE]= {11,22,33,44,55,66,77,88,99};
    printf("Enter a key to be searched : ");
    scanf("%d",&key);

    int index = linear_search(arr,key);
    if(index<0)
        printf("Key not found.!!\n");
    else
        printf("Key found at index : %d\n",index);

    return 0;
}

int linear_search(int *arr , int key){
    for(int i=0; i<SIZE; i++){
        if(key == *(arr+i))
            return i;
    }
    return -1;
}