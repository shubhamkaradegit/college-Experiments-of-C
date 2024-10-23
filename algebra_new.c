#include<stdio.h>

int main(){
int num1,num2,sum,diff,prod;
int op;
printf("Enter first number  : ");
scanf("%d",&num1);

printf("Enter second number : ");
scanf("%d",&num2);

printf("Enter which operation to perform (+,-,*)  :");
scanf("%d",op);
 
switch (op)
{
case 1 : 
  
   printf("sum is : %d",sum);
   
    break;

case 2 : 
   
   printf("sum is : %d",diff);
   
    break;


case 3 : 

   printf("sum is : %d",prod);
   
    break;


default:
printf("Not a valid operation!!!");
    break;
}
return 0;
}