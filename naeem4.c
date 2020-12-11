#include<stdio.h>

void main(){
int i,j,k,l,m,n;
for(i=1; i<=5; i++){
for(j=5; j>=1; j--){

if(j<=i){
    printf("%d",j);
}else{
printf(" ");

}
}
for(k=1; k<=i; k++){
if(k>1){
      printf("%d",k);
    }else{
    printf("");
    }
}

printf("\n");
}
for(l=1; l<=5; l++){
    for(m=5; m>=l; m--){

        if(m>4){
             printf("%d",m);
        }else{

        printf("");
        }
    }
    printf("\n");
}


}




