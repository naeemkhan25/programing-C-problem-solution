#include<stdio.h>
//	C Program to Calculate Area and Circumference of Circle//
void main(){
    int circle_radius;
float  PI=3.146,circle_circumf,circle_aria;
scanf("%D",&circle_radius);
circle_aria=PI*circle_radius*circle_radius;
printf("%f",circle_aria);
printf("\n");
circle_circumf=2*PI*circle_radius;
printf("%f",circle_circumf);
return 0;
}
