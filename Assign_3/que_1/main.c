//descending stack
#include "func.h"

int main()
{
    stack s;
    int choice;
    stack_init(&s);
    do
    {
        printf("enter a choice:\n0.exit\n1.push\n2.pop\n3.peek\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 0:
            exit(0);
            break;
        case 1:
            int data;
            if (!is_full(&s))
            {
                printf("enter a data:\n");
                scanf("%d",&data);
                 push(&s,data);
                 printf("data pushed is %d\n",data);   
            }
            else
            {
                 printf("stack is full\n");
            }
            break;
        case 2:
            int val;
            if (!is_empty(&s))
            {
                val=peek(&s);
                pop(&s);
                printf("value to be popped is %d\n",val);
            }
            else
            {
                 printf("stack is empty\n");
            }
            break;
        case 3:
            if (!is_empty(&s))
            {
                printf("peek value is %d\n",peek(&s));
            }
            else
            {
                printf("stack is empty so peek operation can't be perform\n");
            }
            break;
        default:
            printf("Invalid choice\n");
            break;
        }
    } while (choice!=0);
    return 0;
}