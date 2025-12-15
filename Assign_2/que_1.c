//1. Modify the insertion sort algorithm to sort the array in descending order

#include<stdio.h>
#define SIZE 5

void insertion_sort(int arr[SIZE]);
void display(int arr[SIZE]);

int main()
{
    int arr[SIZE]={10,30,50,40,20};

    printf("\n Before Sort :\n");
    display(arr);
    printf("\n After Sort :\n");
    insertion_sort(arr);
    display(arr);

    return 0;
}
void insertion_sort(int arr[SIZE])
{
    int i,j,temp;
    for(i=1; i < SIZE; i++)
    {
        temp = arr[i]; 
        for(j = i-1; j>=0 && temp > arr[j]; j--)
        {
            arr[j+1] = arr[j];
        }
        arr[j+1] = temp;
    }
}

void display(int arr[SIZE])
{
    for(int i =0; i<SIZE; i++)
    {
        printf("%4d",arr[i]);
    }
    printf("\n");
}
