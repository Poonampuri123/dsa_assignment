#include <stdio.h>
#define SIZE 10

int select_search(int arr[SIZE]);

int main()
{
    int arr[SIZE] = {10, 20, 10, 20, 5, 10, 22, 20, 90, 80};
    int index = select_search(arr);
    printf("The first non-repeating element = %d\n", index);
    return 0;
}

int select_search(int arr[SIZE])
{
    for (int i = 0; i < SIZE; i++)
    {
        int count = 0;
        for (int j = 0; j < SIZE; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if(count == 1)
            return arr[i];
    }
    return -1;
}
