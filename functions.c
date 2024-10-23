#include<stdio.h>
#include<stdlib.h>
 char op;
int num1,num2,ans;
void addition(int,int);
void subtraction(int,int);
void multiplication(int,int);
void division(int,int);
int main(){
 
printf("Enter first number  : ");
scanf("%d",&num1);

printf("Enter second number : ");
scanf("%d",&num2);

printf("Enter the operation to perform (+,-,*,/): ");
scanf("%c",&op);

switch(op){
    case '+' : 
        addition(num1,num2);
        break;

    case '-' : 
        subtraction(num1,num2);
        break;


    case '*' : 
        multiplication(num1,num2);
        break;
    
    case '/' : 
        division(num1,num2);
        break;

    default :
       printf("\nEnter  a valid operation\n ");
       break;
}

return 0;
}
void addition(int x,int y){
    ans=x+y;
    printf("%d",ans);
}
void subtraction(int x,int y){
    ans=x-y;
    printf("%d",ans);
}
void multiplication(int x ,int y){
    ans=x*y;
    printf("%d",ans);
}
void division(int x,int y){
    while(y==0){
        printf("\nDivisor cannot be zero.Please enter anotther value :");
        scanf("%d",&y);
    }
    ans=x/y;
    printf("%d",ans);
}