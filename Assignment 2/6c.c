#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of terms \t");
    scanf("%d",&n);
    float sum = 0.000;
    for (int i = 0; i < n;i++)
    {
        sum = sum +((1.0+i)/(2.0+i));
    }
    printf("%f",sum);
    return 0;
}