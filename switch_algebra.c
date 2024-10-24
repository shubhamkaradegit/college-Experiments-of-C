#include <stdio.h>

int main()
{
    int num1, num2, sum, diff, product, division, op;

    printf("Enter first number  : ");
    scanf("%d", &num1);

    printf("Enter second number : ");
    scanf("%d", &num2);

    printf("Enter the number for operation (1 - '+',2 - '-',3 - '*',4 - '/'): ");
    scanf("%d", &op);
    switch (op)
    {

    case 1:
        sum = num1 + num2;
        printf("%d\n", sum);
        break;

    case 2:
        diff = num1 - num2;
        printf("%d\n", diff);
        break;

    case 3:
        product = num1 * num2;
        printf("%d\n", product);
        break;

    case 4:
        division = num1 / num2;
        if (num2 == 0)
        {
            printf("Divisor cannot be zero !!");
        }
        printf("%d\n", division);
        break;

    default:
        printf("Not a valid operation!!!");
    }

    return 0;
}