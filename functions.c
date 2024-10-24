#include <stdio.h>
#include <stdlib.h>
int op;
int num1, num2, ans;
void addition(int, int);
void subtraction(int, int);
void multiplication(int, int);
void division(int, int);
int main()
{

    printf("Enter first number  : ");
    scanf("%d", &num1);

    printf("Enter second number : ");
    scanf("%d", &num2);

    printf("Enter the operation to perform (1 - '+',2 - '-',3 - '*',4 - '/'): ");
    scanf("%d", &op);

    switch (op)
    {
    case 1:
        addition(num1, num2);
        break;

    case 2:
        subtraction(num1, num2);
        break;

    case 3:
        multiplication(num1, num2);
        break;

    case 4:
        division(num1, num2);
        break;

    default:
        printf("\nEnter  a valid operation\n ");
        break;
    }

    return 0;
}
void addition(int x, int y)
{
    ans = x + y;
    printf("%d", ans);
}
void subtraction(int x, int y)
{
    ans = x - y;
    printf("%d", ans);
}
void multiplication(int x, int y)
{
    ans = x * y;
    printf("%d", ans);
}
void division(int x, int y)
{
    while (y == 0)
    {
        printf("\nDivisor cannot be zero.Please enter anotther value :");
        scanf("%d", &y);
    }
    ans = x / y;
    printf("%d", ans);
}