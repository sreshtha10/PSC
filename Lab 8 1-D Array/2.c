#include<stdio.h>
int main()
{
    int n,max = -2147483648, min = 2147483647 ;//smallest and largest integer which can be stored.
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
        if(arr[i] > max)
        {
            max = arr[i];
        }
        if( arr[i] < min)
        {
            min = arr[i];
        }
    }
    printf("Max: %d\nMin: %d",max,min);
    return 0;
}
