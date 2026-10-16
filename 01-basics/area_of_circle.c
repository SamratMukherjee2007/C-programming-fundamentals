#include <stdio.h>
#include <math.h>

int main() {
    int rad;
    printf("Enter radius of circle : ");
    scanf("%d",&rad);
    float area = (3.14 * pow(rad,2)); 
    printf("Area of the circle is : %f",area);
    return 0;
}
