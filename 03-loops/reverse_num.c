#include <stdio.h>

int main() {
    long long num,rem,rev=0;
    printf("enter a number :");
    scanf("%lld",&num);
    long long copy=num;
    while(num>0) {
        rem=num%10;
        rev=rev*10+rem;
        num/=10;
    }
    printf("Reverse of %lld is %lld",copy,rev);
    return 0;
}