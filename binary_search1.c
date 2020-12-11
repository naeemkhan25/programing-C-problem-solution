
#include<stdio.h>
void main()
{
    int arr[50],target,size;
    printf("plz enter the arry size:");
    scanf("%d",&size);
    printf("plz enter the array element:");
    int i;
    for(i=0;i<size;i++){
       scanf("%d",&arr[i]);
    }
  printf("plz enter the target element:");
  scanf("%d",&target);
  binary_search(arr,target,size);
  }
binary_search(int arr[50],int target,int size)
{

    int i;
    int min=0;
    int max=size-1;
    int mid;
    int loopexcute=0;
    int count=0;
    int indexposstion=0;
    while(min<=max)
        {
        loopexcute++;
        mid=(min+max)/2;
        if(arr[mid]==target)
        {
          count++;
        indexposstion=mid;
        break;
        }else if(arr[mid]<target)
        {
            min=mid+1;
        }else if(arr[mid]>target)
        {
        max=mid-1;
        }else
        {
        printf("enter your target dont match in arrya element");

        }
    }
    printf(" tarversing the array using loop:%d",loopexcute);
    printf("\n");
    if(count==0)
    {
        printf("enter yout target element dont match in array element");
    }else
    {
        printf("enter your target element index and value is [%d]=%d",indexposstion,target);
    }
}



