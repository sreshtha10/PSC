#include<stdio.h>
int main()
{
    int n,sum = 0;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array\n");
    for(int i = 0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i = 0;i<n;i++)
    {
        if(i%2 != 0)
        {
            sum += arr[i];
        }
    }
    printf("Sum: %d",sum);
    return 0;
}
