#include<stdio.h>
void main(){
int arr[7],arr1[4],i,n,sum,sum2,sum3;
printf("please enter your data:\n");
for(i=0;i<4;i++){
   scanf("%d",&arr1[i]);
}
for(i=0;i<7;i++){
    if(i==2){
        arr[i]=arr1[0];
    }else if(i==4){
    arr[i]=arr1[1];
    }else if(i==5){
    arr[i]=arr1[2];
    }else if(i==6){
        arr[i]=arr1[3];
    }else{
    arr[i]=0;
    }
}
sum=arr[2]+arr[4]+arr[6];
if(sum%2==0){
        arr[0]=0;
}else{
arr[0]=1;
}
sum2=arr[2]+arr[5]+arr[6];
if(sum2%2==0){
    arr[1]=0;
}else{
arr[1]=1;
}
sum3=arr[4]+arr[5]+arr[6];
if(sum3%2==0){
    arr[3]=0;
}else{
arr[3]=1;
}
for(i=0;i<7;i++){
    printf("%d ",arr[i]);

}
}

