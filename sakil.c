#include<stdio.h>
int main ()
{
    int i,n,sum=0;
    printf("please enter the last value");
    scanf("%d",&n);
    for(i=2;i<=n;i=i+2)
    {
        sum=sum+i;
    }
    printf("total=%d",sum);
    return 0;


}
