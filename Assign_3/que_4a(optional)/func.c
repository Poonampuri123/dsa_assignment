#include "func.h"


void stack_init(stack *sp)
{
    sp->top=-1;
}
void push(stack *sp,int data)
{
    sp->top++;
    sp->arr[sp->top]=data;
}
void pop(stack *sp)
{
    sp->top--;
}
int peek(stack *sp)
{
    return sp->arr[sp->top];
}
int is_empty(stack *sp)
{
    if(sp->top==-1)
        return 1;
    else
        return 0;
}
int is_full(stack *sp)
{
    if(sp->top==size-1)
        return 1;
    else
        return 0;
}

int is_operand(char ch)
{
    return ch>=48&&ch<=57;
}
int priority(char op)
{
    switch (op)
    {
    case '$':return 10;
    case '/':
    case '*':
    case '%':return 9;
    case '+':
    case '-':return 8;
    case '(':
    default:
    return 0;
    }
}
void in_to_post(char *in,char *post)
{
    stack s;
    stack_init(&s);
    int j=0;
    for (int i=0;in[i]!='\0'; i++)
    {
        if (is_operand(in[i]))
        {
            post[j]=in[i];
            j++;
        }
        
        else if(in[i]=='(')
        {
            push(&s,'(');
        }
        else if (in[i]==')')
        {
            char ch;
            while ((ch=peek(&s))!='(')
            {
                post[j++]=ch;
                pop(&s);
            }
            pop(&s);
        }
        else
        {
            while (!is_empty(&s)&&priority(peek(&s))>=priority(in[i]))
            {
                post[j++]=peek(&s);
                pop(&s);
            }
            push(&s,in[i]);
        }
    }
    while (!is_empty(&s))
        {
            post[j++]=peek(&s);
            pop(&s);
        }
        post[j]='\0';
    
}