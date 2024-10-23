#include<stdio.h>
#include<math.h>

int main(){
int a,b,c;
float dis,x1,x2;

printf("Enter the coeffient of quadratic equation (a,b,c) : ");
scanf("%d %d %d",&a,&b,&c);

dis=b*b-4*a*c;
x1=(-b+pow(dis,0.5))/(2*a);
x2=(-b-pow(dis,0.5))/(2*a);

printf("The roots of the quadratic equation are : %.2f and %.2f\n",x1,x2);
return 0;
}