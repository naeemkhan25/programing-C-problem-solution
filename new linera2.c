#include<stdio.h>
void main(){
int num[10],target,size;
printf("plz enter array size:");
scanf("%d",&size);
printf("plz enter your array elemet:");
int i;
for(i=0;i<size;i++)
{
    scanf("%d",&num[i]);
}
printf("plz enter your target element");
scanf("%d",&target);
linear_search(num,target,size);
}
void linear_search(int num[],int target,int size){

int traverse=0;
int i,j;
int count=0;
int indx_count=0;
for(i=0;i<size;i++){
    traverse++;
    if(num[i]==target){
        count=1;
        indx_count=i;
        break;

    }
}
  printf(" total loop =%d \n",traverse);
    if(count==1){
        printf("founded data index postion and value  is[%d]=%d",i,target);
    }else{
    printf("your data is not foud %d",target);

    }


}
