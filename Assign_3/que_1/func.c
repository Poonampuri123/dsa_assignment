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