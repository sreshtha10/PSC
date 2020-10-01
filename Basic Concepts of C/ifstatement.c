#include <stdio.h>
/*
int main()
{
    int a, b;
    printf("Enter two numbers = ");
    scanf("%d%d", &a, &b);

    if (a > b)
        printf("Max = a");
    else
        printf("Max = b");
}
OR
*/
/*int max(int a, int b, int c)
{
    int result;
    if (a > b)
    {

        if (a > c)
        {
            result = a;
        }
        else
        {
            result = c;
        }
    }
    else if (b > c)
    {
        result = b;
    }
    else
    {
        result = c;
    }
}
OR
*/
int max(int a, int b, int c)
{
    int result;
    if (a >= b && a >= c)
    {
        result = a;
    }
    else if (b >= a && b >= c)
    {
        result = b;
    }
    else
    {
        result = c;
    }
    return result;
}

int main()
{
    printf("%d", max(40, 50, 30));
    return 0;
}
