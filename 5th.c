#include<stdio.h>
void main(){
    int i,j;
char flag;
char arra[100],arra2[100];
printf("enter your flag:\n");
scanf("%s",&flag);
printf("enter your string:\n");
scanf("%s",&arra);
for(i=0,j=0;arra[i]!='\0';i++,j++){
    if(arra[i]==flag){
        arra2[j]=flag;
        j++;
    }
    arra2[j]=arra[i];
}
arra2[j]='\0';
printf("after shifting:\n");
printf("%s\n",arra2);
for(i=0,j=0;arra2[i]!='\0';j++,i++){
    if(arra2[i]==flag){
       i++;
    }
    arra[j]= arra2[i];
}
arra[j]='\0';
printf("before de-shifting:\n");
printf("%s\n",arra);
return 0;
}
