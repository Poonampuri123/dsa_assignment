//3. Implement binary search algorithm if array is sorted in descending order.

#include<stdio.h>
#define SIZE 9

int binary_search(int arr[SIZE],int key);
int main(){
    int key;
    int arr[SIZE] = {99,88,77,66,55,44,33,22,11};
    printf("Enter a key to be searche : ");
    scanf("%d",&key);

    int index = binary_search(arr,key);
    if(index == -1)
        printf("Key not found.\n");
    else
        printf("key found at index : %d\n",index);


    return 0;
}

int binary_search(int arr[SIZE],int key){

    int left =0, right=SIZE-1,mid;
    while(left <= right){
        mid = (left+right)/2;
        if(key == arr[mid])
            return mid;
        if(key>arr[mid]){
            right = mid-1;
        }
        else
            left = mid+1;
    }
    return -1;    

}