#include <stdio.h>
int main()
{
    int month, a, b;
    printf("Enter month : ");
    scanf("%d", &month);
    a = 1 || 3 || 5 || 7 || 8 || 10 || 12;
    b = 4 || 6 || 9 || 11;
    if (month == 'a')
    {
        printf("Number of days = 31");
    }
    else if (month == 2)
    {
        printf("Number of days = 28 of 29");
    }
    else if (month == 'b')
    {
        printf("Number of days = 30");
    }
    else
    {
        printf("Invalid input");
    }
}