#include <stdio.h>

int main() {
    int a,b;
    printf("enter value of a and b for a^b :");
    scanf("%d%d",&a,&b);
    int pow = 1;
    for (int i = 1; i <= b; i++)
    {
        pow = pow * a;
    }
    printf("value of %d^%d is %d",a,b,pow);
    return 0;
}