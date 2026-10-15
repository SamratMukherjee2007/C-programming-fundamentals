#include <stdio.h>
int main() {
    int a,b,c;
    printf("enter value of a ,b,c :");
    scanf("%d%d%d",&a,&b,&c);
    if(a == b && b == c)
    {
        printf("all numbers are same");
    }
    else if (a > b && b > c)
    {
        printf("a is largest");
    }
    else if (b > c && c > a)
    {
        printf("b is largest");
    }
    else{
        printf("c is largest");
    }
    return 0;
    
}