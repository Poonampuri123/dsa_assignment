//6. to find rank of an element in a stream of integers. rank: rank of a given integer "x", in stream is "total
//no. of ele's less than or equal to x (including x).

#include <stdio.h>
#define SIZE 7

int rank(int arr[SIZE], int key);

int main()
{
    int arr[SIZE] = {10, 20, 15, 3, 4, 4, 1};
    int key;
    printf("Enter the key to find its rank\n");
    scanf("%d", &key);
    int Rank = rank(arr, key);
    if (Rank == -1)
        printf("Invalid\n");
    else
        printf("Rank of %d = %d", key, Rank);

    return 0;
}

int rank(int arr[SIZE], int key)
{
    int count = 0;
    for (int i = 0; i < SIZE; i++)
    {
        if (arr[i] <= key)
        {
            count++;
        }
    }
     return count;
}
