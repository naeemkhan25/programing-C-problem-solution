#include<stdio.h>

int ch;
int push(){

printf("naeem");

}
void main()
{


while(1)
    {


    printf("\n Enter your choice:\n1:push\n2:pop\n3:Visit\n4:peek\n5:size \n");
    scanf("%d",&ch);

    if(ch==1)
        {
        push();

        }else if(ch==2)
        {
            pop();

        }else if(ch==3)
        {
            Visit();
        }else if(ch==4)
        {
            peek();
        }else if(ch==5)
        {
            size();
        }
}
}
