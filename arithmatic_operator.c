#include<stdio.h>
int num1,num2,ans;
char operator;
void addition(int num1,int num2);
void subtraction(int num1,int num2);
void multiplication(int num1,int num2);
void division(int num1,int num2);
int main(){
  
printf("Enter first number : ");
scanf("%d",&num1);

printf("Enter second number : ");
scanf("%d",&num2);

printf("Enter operation (+,-,*,/) : ");
scanf(" %c",&operator);

switch(operator){
    case '+':
            addition(num1,num2);
            break;

    case '-':
            subtraction(num1,num2);
            break;
    
    case '*':
            multiplication(num1,num2);
            break;
    
    case '/':
            division(num1,num2);
            break;
    
    default:
          printf("Invalid operation");
}
return 0;
}

void addition(int num1,int num2){
    ans=num1+num2;
    printf("%d",ans);

}

void subtraction(int num1,int num2){
    ans=num1-num2;
    printf("%d",ans);

}

void multiplication(int num1,int num2){
    ans=num1*num2;
    printf("%d",ans);

}

void division(int num1,int num2){
    if(num2 == 0){
        printf("Divisor cannot be zero!!");
    }
    ans=num1/num2;
    printf("%d",ans);

}