#include <stdio.h>
#define CAPACITY 5
char stack[CAPACITY];
int top =-1;
void push(char x){
    if(top<CAPACITY-1)
    {
        top=top+1;
        stack[top]=x;
        printf("Successfully add %c\n",x);
    }else{
        printf("Exception !No space\n");

    }

}
char pop()
{
    if(top>=0)
    {
        char val=stack[top];
        top=top-1;
        return val;
    }
    printf("Exception ! Empty stack \n");
    return -1;

}
char peek()
{
    if(top>=0)
    {
        return stack[top];
    }
    printf("Exception ! Empty stack \n");
    return -1;
}
int main()
{
    printf("Implement the stack: \n");
    push('o');
    push('g');
    push('n');
    pop();
    push('n');
    push('a');
    pop();
    push('a');
    push('m');
    pop();
    push('m');
    for(int i=5-1;i>=0;i--){
        printf("%c",stack[i]);
    }
    return 0;
}
