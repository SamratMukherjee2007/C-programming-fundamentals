#include <stdio.h>
int main() {
    int a , b , c;
    printf("enter value of three sides of the triangle :");
    scanf("%d%d%d",&a,&b,&c);
    if (a == b && b == c)
    {
        printf("Triangle can be formed and it will be EQUILATERAL");
    }
    else if (a == b )
    {
        if (a > c && b > c   )
        {
            printf("triangle can be formed and it will be ISOSCELES");
        }
        else{
            printf("triangle cant be formed");
        }
        
    }
    
    else if (a > b && b > c)
    {
        if (b + c >= a)
        {
            printf("triangle can be formed");
        }
        else{
            printf(" triangle cant be formed");
        }
        
    }
    else if (b > a && b > c)
    {
        if (a + c >= b )
        {
            printf("triangle can be formed");
        }
        else{
            printf("triangle cant be formed");
        }
    }
    else if (c > a && c > b)
    {
        if (a + b >= c)
        {
            printf("triangle can be formed");
        }
        else{
            printf("triangle cant be formed");
        }
    }
    else{
        printf("error");
    }
    return 0;

}