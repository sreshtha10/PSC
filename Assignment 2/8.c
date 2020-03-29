#include<stdio.h>
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <=5-i; j++)
        {
            printf("%c",32);
        }
        for (int j = 1; j <= i; j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }

    printf("\n");

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <=5-i; j++)
        {
            printf("%c",32);
        }
        for (int j = 1; j <= i; j++)
        {
            printf("%d",j);
        }
        for (int j = i+1;  j<= (2*i)-1 ; j++)
        {
            printf("%d",j);
        }
        
        printf("\n");
    }

    printf("\n");

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <=5-i; j++)
        {
            printf("%c",32);
        }
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        for (int j = i+1;  j<= (2*i)-1 ; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int i = 4; i >= 1; i--)
    {
        for (int j = 1; j<= 5-i; j++)
        {
            printf("%c",32);
        }
        for (int j = i; j >= 1; j--)
        {
            printf("*");
        }
        for (int j = i-1; j>=1; j--)
        {
            printf("*");
        }
        
        printf("\n");
    }
    



    
}