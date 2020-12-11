#include<stdio.h>
#define max 5
int data[max],choice,top = -1, input;

void visit()
{
    int i=0;
    while(i<=top)
    {
        printf("%d   ", data[i]);
         i++;
    }
    printf("\n");

}
int is_empty()
{
    if (top>=0)return 1;
    else return 0;
}
void pop()
{
    if(is_empty())
    {
         top--;

    }
    else
    {
        printf("Stack is already empty.\n");

    }

}

void size ()
{
    printf("Current Stack Size: %d\n", top +1);
}

void peek ()
{

    if(!is_empty())
    printf("Last stack element: %d\n", data[top]);
    else printf("Stack data is not available.");
}

int is_full()
{
    if(top==max-1) return 1;
    else return 0;
}


void push ()
{
    if(is_full())
    {
        printf("Stack is full.\n");
        return;
    }
    else
    {
        printf("input data: ");
        scanf("%d",&input);
        top++;
        data[top] = input;
    }
}

void main()
{
    while(1)
    {
        printf("\n\nEnter your Choice:\n1. Push\n2. Pop\n3.Visit\n4.Peek\n5.Size\n");
        scanf("%d", &choice);
        switch(choice)
        {
        case 1:
        {
            push();
            break;
        }
        case 2:
        {
            pop();
            break;
        }
        case 3:
        {
            visit();
            break;
        }
        //
        case 4:
        {
            peek();
            break;
        }
        case 5:
        {
            size();
            break;
        }


        }
    }
}
