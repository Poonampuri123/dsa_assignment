#include <stdio.h>

#define size 30

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


int is_operand(char ch);
int priority(char op);
void in_to_post(char *in,char *post);


