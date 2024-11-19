#include <stdio.h>

int main()
{
    int numbers[10];
    int sum = 0;
   

    printf("enter 10 numbers : ");
    for (int i = 0; i < 10; i++)
    {

        printf("number %d : ", i + 1);
        scanf("%d", &numbers[i]);
    }

    int smallest=numbers[0];
    int largest=numbers[0];

    for(int i=0;i<10;i++){
        sum +=numbers[i];

        if(numbers[i]<smallest){
            smallest=numbers[i];
        }
        if(numbers[i]>largest){
            largest=numbers[i];
        }
    }

    float avg=sum/10.0;


    printf("sum : %d\n",sum);
    printf("smallest: %d\n",smallest);
    printf("largest : %d\n",largest);
    printf("Average: %.2f\n",avg);
    return 0;
}