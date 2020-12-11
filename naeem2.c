#include<stdio.h>
//	C program to enter length in centimeter and convert it into meter and kilometer.//
void main(){
float cm,meter,km;
scanf("%f",&cm);
meter=cm/100;
km=cm/100000;
printf("%f \n %f",meter,km);

return 0;

}
