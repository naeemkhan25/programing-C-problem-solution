#include<stdio.h>
void main()
{
int size;
printf("plz enter your array size :\n");
scanf("%d",&size);
int arr[size],i;
printf("enter your array element:\n");
for(i=0;i<size;i++){
    scanf("%d",&arr[i]);
}
in_sorting(arr,size);
}
void in_sorting(int arr[],int size)
{
int i,j,temp;
for(i=1;i<size;i++)
{
   int key=i;
   for(j=i-1;j>=0;j--){
    if(arr[key]<arr[j]){
        temp=arr[j];
        arr[j]=arr[key];
        arr[key]=temp;
        key --;
    }
    print(arr,size);
   }
   printf("\n");
}
}
void print(int arr[],int size){
    int i;
    for(i=0;i<size;i++)
    {
        printf("%d",arr[i]);

    }
      printf("\n");

}
