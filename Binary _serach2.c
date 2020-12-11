#include<stdio.h>
void main(){
int size;
printf("plz enter your array size:\n");
scanf("%d",&size);
int arr[size],target;
printf("plz enter your target element:\n");
int i;
for(i=0;i<size;i++)
{
    scanf("%d",&arr[i]);
}
printf("plz enter your array target value:\n");
scanf("%d",target);
 binary_search(arr,size,target);
}
binary_search(int arr[],int size, int target)
{
    int i;
    int indexId;
    int min=0;
    int max=size-1;
    int mid;
    int count=0;
    int loopExcute=0;
    while(min<=max){
        loopExcute++;
        mid =(min+max)/2;
         if(arr[mid]==target)
    }
}
