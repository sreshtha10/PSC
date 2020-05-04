#include<stdio.h>
int main()
{
    int n,lower,upper;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array\n");
    for(int i = 0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the range of index\n");
    scanf("%d",&lower);
    scanf("%d",&upper);
    for(int i = lower;i<= upper;i++)
    {
       printf("%d%c",arr[i],32); 
    }
    return 0;
}
