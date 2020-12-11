#include<stdio.h>

void main(){
int i ,j=5;
for(i=1; i<=5; i++){
  for(j=5; j>=1; j--){
        if(j<5 || j<4){
   printf("%d",j);
        }else{
        printf("");

        }
  }

    printf("\n");
    }

}



