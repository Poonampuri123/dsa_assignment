#include "func.h"


void stack_init(stack *sp)
{
    sp->top=size;
}
void push(stack *sp,int data)
{
    sp->top--;
    sp->arr[sp->top]=data;
}
void pop(stack *sp)
{
    sp->top++;
}
int peek(stack *sp)
{
    return sp->arr[sp->top];
}
int is_empty(stack *sp)
{
    if(sp->top==size-1)
        return 1;
    else
        return 0;
}
int is_full(stack *sp)
{
    if(sp->top==0)
        return 1;
    else
        return 0;
}
void get_array(int *arr,int s)
{
    printf("enter elements of array:");
    for (int  i = 0; i < s; i++)
    {
        scanf("%d",&arr[i]);
    }
}
void display(int * arr,int s)
{
    printf("elements in array are:");
    for (int i = 0; i < s; i++)
    {
        printf("%4d",arr[i]);
    }   
    printf("\n");
}
void reverse(int *arr,int s,stack *sp)
{
    stack_init(sp);
    for (int  i = 0; i < s; i++)
    {
      push(sp,arr[i]);  
    }
    for (int  i = 0; i < s; i++)
    {
        arr[i]=peek(sp);
        pop(sp);
    }
}