#include <stdio.h>
#include <stdlib.h>
#define MAX 5
struct Stack
{
    int items[MAX];
    int top;

};

void initstack(struct Stack *s)
{
    s->top=-1;
}
int isFull(struct Stack *s )
{
    return s->top==MAX-1;

}
int isEmpty(struct Stack *s)
{
    return s->top==-1;;

}
void push(struct Stack *s,int value)
{
    if(isFull(s))
    {
        printf("stack is full! cannot push %d\n", value);
    }
    else
    {
        s->top++;
        s->items[s->top]=value;
        printf("pushed %d onto the stack\n",value);
     }
    }
    int pop(struct Stack *s)
    {
        if(isEmpty(s))
        {
            printf("stack is empty!cannot pop\n");
            return -1;
        }
        else
        {
            int poppedValue =s->items[s->top];
            s->top--;
            printf("popped %d from the stack\n",poppedValue);
            return poppedValue;
        }
    }
    void displayStack(struct Stack *s)
    {
        if(isEmpty(s))
        {
            printf("stack is empty\n");
        }
        else
        {
            printf("stack elements:");
            for(int i=0; i<=s->top; i++)
            printf("\t%d",s->items[i]);
        }
        printf("\n");
        }

    
int main()
{
    struct Stack stack;
    initstack(&stack);

    push(&stack,10);
    push(&stack,20);
    push(&stack,30);
    push(&stack,40);
    displayStack(&stack);

    pop(&stack);
    displayStack(&stack);
    return 0;
}





