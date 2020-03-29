#include<stdio.h>
int main()
{
    int n,sum = 1;
    printf("Enter the value of N \t");
    scanf("%d",&n);
    int a[n];
    a[0] = 1;
    for (int i = 1; i <= n-1 ; i++)
    {
        a[i] = a[i-1]+i;
        sum = sum + a[i];
    }
    
    printf("%d",sum);
    return 0;
}