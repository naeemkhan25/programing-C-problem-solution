#include<stdio.h>
void main(){
int count=0;
int lenth;
int i=0;
char arr1[100];
    printf("enter your  array lenth:\n");
    scanf("%s",&arr1);


lenth=strlen(arr1);
     for(i=0;i<lenth;i++){
        if(arr1[i]=='1'){
            count=count+1;
        }
     }
     if(count%2==0){
        arr1[lenth]='0';

     }else{
         arr1[lenth]='1';

     }
     arr1[lenth+1]='\0';
     printf("%s",arr1);
}
