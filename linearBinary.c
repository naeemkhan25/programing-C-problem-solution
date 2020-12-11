#include<stdio.h>

int choice,input,arr[5],top=-1;

void main()
{


while(1)
    {

    printf("\n Enter your choice:\n1:push\n2:pop\n3:Visit\n4:peek\n5:size \n");
    scanf("%d",&choice);


    if(choice==1)
        {
        push();

        }else if(choice==2)
        {
            pop();

        }else if(choice==3)
        {
            Visit();
        }else if(choice==4)
        {
            peek();
        }else if(choice==5)
        {
            size();
        }else if(choice>5)
        {
            printf("this is invalide choice plze try to valide choice");
        }
    }
}
