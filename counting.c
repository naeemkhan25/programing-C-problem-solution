#include<stdio.h>
void main(){

int size,i;
printf("plz entet your array size:\n");
scanf("%d",&size);
int arr[size];
printf("plz enter your array element:\n");
for(i=0;i<size;i++){
        scanf("%d",&arr[i]);

}
int max=arr[0];
for(i=1;i<size;i++)
    {
    if(max<arr[i]){
        max=arr[i];
    }

    }
    printf("max is=%d",max);
    printf("\n");
int maxsize=max+1;
int count,j;
int newarr[maxsize];

for(i=0;i<maxsize;i++){
    newarr[i]=0;

    count=1;
    for(j=i+1;j<maxsize;j++){
        if(arr[i]==arr[j])
            {

            count++;

            }
    }
    if(i==count){
        newarr[arr[i]]=count;
    }

}
for(i=0;i<maxsize;i++){
    printf("%d",newarr[i]);
}


}

