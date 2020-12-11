#include<stdio.h>
void main(){
int size;
printf("plz enter your array size:\n");
scanf("%d",&size);
int arr[size],target;
printf("plz enter your array element:\n");
int i;
for(i=0;i<size;i++)
{
    scanf("%d",&arr[i]);
}
printf("plz enter your target element:\n");
scanf("%d",&target);
linear_Shorting(arr,size,target);
}
void linear_Shorting(int arr[],int size,int target)
{
    int i;
    int loopexcute=0;
    int count=0;
    int indexId=0;
    for(i=0;i<size;i++)
    {
        loopexcute++;
        if(arr[i]==target)
        {
                count=1;
            indexId=i;
        }
    }
    printf("loopexcute value=%d",loopexcute);
    if(count==1){
        printf(" target index Id and value is[%d]=%d",indexId,target);
    }else{

    printf("target value is do not match in array");

    }
}
