#include <stdio.h>

int main() {
    int i,sum=0,num,rem;
    printf("enter a number : ");
    scanf("%d",&num);
    int copy=num;
    while (num>0)
    {
        rem=num%10;
        sum+=rem;
        num/=10;

    }
    printf("Sum of digits of %d is %d",copy,sum);
    return 0;
}