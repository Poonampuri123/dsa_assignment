#include <stdio.h>
#include <stdlib.h>

#define size 5

typedef struct stack
{
    int top;
    int arr[size];
}stack;

void stack_init(stack *sp);
void push(stack *sp,int data);
void pop(stack *sp);
int peek(stack *sp);
int is_empty(stack *sp);
int is_full(stack *sp);

void get_array(int *arr,int s);
void display(int * arr,int s);
void reverse(int *arr,int s,stack *sp);
