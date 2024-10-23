#include<stdio.h>

int main(){
int num1,num2,sum,diff,prod;
printf("Enter first number  : ");
scanf("%d",&num1);

printf("Enter second number : ");
scanf("%d",&num2);

sum=num1 + num2;
diff=num1-num2;
prod=num1*num2;
printf("sum is : %d \n",sum);
printf("difference is : %d \n",diff);
printf("product is : %d \n",prod);
return 0;
}