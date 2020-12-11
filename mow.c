#include<stdio.h>
void main(){
int a,b,c,d,n=1,k=1,z=1;
printf("Please Enter your IP Address:\n");
scanf("%d.%d.%d.%d",&a,&b,&c,&d);

if(a<0||a>255||b<0||b>255||c<0||c>255||d<0||d>255){

printf("invalid IP address enter your valid IP Address CHANGE IS  ONlY TWO:%d\n");

}else{
if(a>=0 && a<=127){
    printf("class A");
}else if(a>127 && a<=191){
printf("class B");
}else if(a>191 && a<=223){
printf("class C");
}else if(a>223 && a<=239){
printf("class D");
}
else if(a>239 && a<=255){
printf("class E");
}else{
printf("thanks");
}
}

}

