#include<stdio.h>

int main()
{
    /* 1 */
    int num[10];
    for (int i = 0; i <= 9; i++)
    {
        scanf("%d",&num[i]);
    }
    for (int i = 0; i <= 9 ; i++)
    {
        for (int j = i+1; j <= 9; j++)
        {
            if (num[i]+num[j] ==70)
            {
                printf("%d,%d%c",num[i],num[j],32);
            }
        }
    }
}