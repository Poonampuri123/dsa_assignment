//2. Create an array of integers. Reverse the array using stack
#include "func.h"

int main()
{
    stack s;
    int arr[size];
    get_array(arr,size);
    display(arr,size);
    reverse(arr,size,&s);
    display(arr,size);
    return 0;
}