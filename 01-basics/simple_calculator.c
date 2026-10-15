#include <stdio.h>

int main(void)
{
    double a, b;
    char operator;

    printf("Enter an expression (e.g. 10 + 5): ");
    scanf("%lf %c %lf", &a, &operator, &b);

    switch (operator)
    {
        case '+':
            printf("Result = %.2lf\n", a + b);
            break;

        case '-':
            printf("Result = %.2lf\n", a - b);
            break;

        case '*':
            printf("Result = %.2lf\n", a * b);
            break;

        case '/':
            if (b != 0)
                printf("Result = %.2lf\n", a / b);
            else
                printf("Error: Division by zero.\n");
            break;

        default:
            printf("Invalid operator.\n");
    }

    return 0;
}
