//4. Implement linear search algorithm to find the nth occurence of the given element. If nth occurrence is
//not found, return -1.

#include<stdio.h>
#define SIZE 9

int comparisons;

int linear_search(int arr[SIZE],int key); 
int main()
{
    int arr[SIZE] = {33,55,88,77,44,11,66,22,99};
    
    int key;
    printf("Enter the key to search :");
    scanf("%d",&key);

    int index = linear_search(arr,key); 
    if(index == -1)
        printf("Key Not Found !\n");
    else
        printf("Key found at index %d\n",index);
        
        printf("Comparisons = %d\n",comparisons);

    return 0;
}

int linear_search(int arr[SIZE],int key) 
{
 
    for(int index = 0; index < SIZE; index++)
    {
        comparisons++;
        if(key == arr[index])
        {
            return index;
        }
    }
    return -1; 
}