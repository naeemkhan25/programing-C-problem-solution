#include<stdio.h>
#define max 5
int data[max],choice,top = -1, input;
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
