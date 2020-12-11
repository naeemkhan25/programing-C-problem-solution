#include<stdio.h>

void main()
{
int size;
printf("Plz enter your array size:\n");
scanf("%d",&size);
printf("plz enter your array element:\n");
int arr[size],i,j,outarr[size],max;
for(i=0;i<size;i++){
    scanf("%d",&arr[i]);
}
max=arr[0];

for(i=0;i<size;i++)
    {
    if(max<arr[i]){
        max=arr[i];
    }

    }
    printf("max=%d",max);
    printf("\n");

   int  maxsize=max+1;
    int newarr[maxsize];
    for(i=0;i<maxsize;i++){
            newarr[i]=0;
        printf("[%d] = %d",i,newarr[i]);

    }
    printf("\n");
    int count;
    for(i=0;i<maxsize;i++){
        count=0;
        for(j=0;j<size;j++){
            if(i==arr[j]){
                count++;
            }
        }
        newarr[i]=count;
            printf("[%d]=%d ",i,newarr[i]);
    }
    printf("\n");
for(i=0;i<maxsize;i++){
    if(i==0){
        newarr[i]=newarr[i];
    }else if(i>0){
        newarr[i]+=newarr[i-1];
    }
    printf("[%d]=%d",i,newarr[i]);
}
printf("\n");
int store;
for(i=0;i<size;i++){
        store=arr[i];
    if(newarr[store]>=0){

        outarr[newarr[store]-1]=store;
    newarr[store]=newarr[store]-1;
    }

}





}
