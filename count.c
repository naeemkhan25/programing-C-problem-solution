#include<stdio.h>
#define max 5
void main()
{
int arr[max];
printf("plz enter your array element:\n");
int i;
for(i=0;i<max;i++){
scanf("%d",&arr[i]);
}
int j,count=1;

for(i=0;i<max;i++){
    for(j=0;j<max-1;j++)
        {
        if(arr[i]==arr[j+1])
            {
            count++;



            }

        }


            printf("[%d]=%d",arr[i],count);
}
}
