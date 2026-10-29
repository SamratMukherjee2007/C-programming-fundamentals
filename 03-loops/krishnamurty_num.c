#include <stdio.h>

int main()
{
    long long num, copy1, copy2;
    printf("Enter a number : ");
    scanf("%lld", &num);
    int rem, sum = 0, fact = 1;
    copy1 = num;
    copy2 = copy1;
    while (copy1 > 0)
    {
        rem = copy1 % 10;
        for (int i = 1; i <= rem; i++)
        {
            fact *= i;
        }
        sum += fact;
        copy1 /= 10;
    }
    if (copy2 == sum)
    {
        printf("%lld is an Krishnamurty number", copy2);
    }
    else
    {
        printf("%lld is not an Krishnamurty number", copy2);
    }

    return 0;
}