#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("please enter the last value of the series");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }

    printf("\nsum=%d\n",sum);
    return 0;



}
