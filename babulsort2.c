#include<stdio.h>
void main(){

int  arr[50],size;
printf("plz enter your array size:");
scanf("%d",&size);
int i;
printf("plz enter your array element:");
for(i=0;i<size;i++)
{
    scanf("%d",&arr[i]);
}
babul_short(arr,size);
}
void babul_short(int arr[],int size)
{

    int i,j;
    int sowping;
    for(i=0;i<size-1;i++)
    {
        for(j=0;j<size-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                sowping=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=sowping;
            }
            print(arr,size);
        }
        printf("\n");
    }

}
void print(int arr[],int size){
int i;
for(i=0;i<size;i++){
    printf("%d,",arr[i]);
}
printf("\n");


}
