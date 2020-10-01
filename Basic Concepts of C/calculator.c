#include <stdio.h>
int main()
{
    double a, b;
    char op;
    printf("Enter a number: ");
    scanf("%lf", &a);
    printf("Enter operator: ");
    scanf(" %c", &op);
    printf("Enter a number: ");
    scanf("%lf", &b);

    if (op == '+')
    {
        printf("result = %lf", a + b);
    }
    else if (op == '-')
    {
        printf("result = %lf", a - b);
    }
    else if (op == '*')
    {
        printf("result = %lf", a * b);
    }
    else if (op == '/')
    {
        printf("result = %lf", a / b);
    }
    else
    {
        printf("Invalid operator");
    }
}