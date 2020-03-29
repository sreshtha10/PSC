#include<stdio.h>
int main()
{
    int n,sum = 1;
    printf("Enter the value of N \t");
    scanf("%d",&n);
    int a[n];
    a[0]= 0;
    a[1]= 1;
    for (int i = 3; i <= n; i++)
    {
        a[i-1]= a[i-2]+a[i-3];
        sum = sum + a[i-1];
    }
    printf("%d",sum);
    return 0;
}