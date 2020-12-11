#include<stdio.h>
void main(){
int weight[5],profit[5];
float div[5];
int bag=10,i=0;
printf("enter your weight \n");
for(i=0;i<5;i++){
    scanf("%d",&weight[i]);
}
printf("enter your profit \n");
for(i=0;i<5;i++){
    scanf("%d",&profit[i]);
}
for(i=0;i<5;i++){
   div[i]=profit[i]/weight[i];
}
for(i=0;i<5;i++){
    printf("%f",div[i]);
}
}
