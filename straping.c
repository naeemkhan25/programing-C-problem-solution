#include<stdio.h>
void main(){
    char arra1[100],arra2[100];
    char flag;
    int i,j,count=0;
    printf("enter flag character:\n");
    scanf("%s",&flag);
    printf("enter your massage data:\n");
    scanf("%s",&arra1);

    for(i=0;arra1[i]!='\0';i++){

        if(arra1[i]==flag){

            arra2[i]=flag;
            count=1;
        }
        arra2[i+count]=arra1[i];
    }
    arra2[i]='\0';
    printf("%s",arra2);
}
