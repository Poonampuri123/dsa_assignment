#include "func.h"




int main()
{
    char infix[]="5+9-4*(8-6/2)+1$(7-3)";
    char postfix[]="";
    printf("infix=%s\n",infix);
    in_to_post(infix,postfix);
    printf("postfix=%s\n",postfix);
    return 0;
}

