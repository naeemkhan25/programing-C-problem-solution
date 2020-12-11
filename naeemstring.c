#include<stdio.h>
void main(){
char arr[20];
gets(arr);
int i=0,lenthcount=0;
while(arr[i]!='\0'){
        i++;
    lenthcount++;

}

printf("%d",lenthcount);
}
