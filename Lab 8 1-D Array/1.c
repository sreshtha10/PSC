#include<stdio.h>
int main()
{
    int n,num;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the number to be searched\n");
    scanf("%d",&num);
    for(int i = 0;i<n;i++)
    {
        if(arr[i] == num)
        {
            printf("Number Found");
            return 0;
        }
    }
    printf("Number not found");
    return 0;
}
