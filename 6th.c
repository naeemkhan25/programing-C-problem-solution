#include<stdio.h>
void main(){
    int count=0;
    int lenth,i=0;
    char arra[100],arra2[100];
    printf("enter your  1st string:\n");
    scanf("%s",&arra);
    printf("enter your  2nd string:\n");
    scanf("%s",&arra2);
    lenth=strlen(arra);
for(i=0;i<lenth;i++){
    if(arra[i]!=arra2[i]){
        count=count+1;
    }
}
printf("%d",count);
}
