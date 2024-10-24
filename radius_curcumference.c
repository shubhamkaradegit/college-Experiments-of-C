#include<stdio.h>
#define pi 3.14
int main(){
float radius,area,circum;
printf("Enter the radius of Circle : ");
scanf("%f",&radius);

//calulate area
area = pi * radius * radius;

//calculate circum
circum = 2 * pi * radius;

//output of result
printf("Area of circle : %.2f \n",area);
printf("Circumference of circle : %.2f \n",circum);
return 0;
}