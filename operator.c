#include<stdio.h>

int main(){
int a,b;
printf("Enter two integers : ");
scanf("%d %d",&a,&b);

//relational operator

printf("Relational operations: \n");
printf("a > b : %d\n",a > b);
printf("a < b : %d\n",a < b);
printf("a == b : %d\n",a == b);
printf("a != b : %d\n",a != b);

//Logical operator
printf("Logical operations: \n");
printf("a && b : %d\n",a && b);
printf("a || b : %d\n",a || b);
printf("!a : %d\n",!a);
printf("!b : %d\n",!b);

//bitwise operator
printf("Bitwise operations: \n");
printf("a & b : %d\n",a & b);
printf("a | b : %d\n",a | b);
printf("a ^ b : %d\n",a ^ b);


return 0;
}