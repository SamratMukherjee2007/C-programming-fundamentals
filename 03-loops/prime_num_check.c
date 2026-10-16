#include <stdio.h>

int main()
{
    int num;
    printf("enter a numbrer :");
    scanf("%d", &num);
    int isPrime = 0,i;
    if (num <= 1)
    {
        printf("%d is not a prime number", num);
    }
    else
    {
        for ( i = 2; i <= num / 2; i++)
        {
            if (num % i == 0)
            {
                isPrime = 1;
                break;
            }
        }
        if (isPrime == 0)
        {
            printf("%d is a prime number", num);
        }
        else 
        {
            printf("%d is not a prime number", num);
        }
    }

    return 0;
}
