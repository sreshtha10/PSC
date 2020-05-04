#include<stdio.h>
int main()
{
    int size,p=0,n=0,odd=0,even=0,z=0;
    printf("Enter the size of the array\n");
    scanf("%d",&size);
    int arr[size];
    for(int i = 0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i = 0;i <size;i++)
    {
        if(arr[i] %2 == 0)
        {
            even++;
        }
        if(arr[i] %2 != 0)
        {
            odd++;
        }
        if(arr[i] > 0)
        {
            p++;
        }
        if(arr[i] < 0)
        {
            n++;
        }
        if(arr[i] == 0)
        {
            z++;
        }
    }
    printf("Even:%d\nOdd:%d\nPositive:%d\nNegative:%d\nZero:%d",even,odd,p,n,z);
}
