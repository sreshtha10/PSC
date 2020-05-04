#include<stdio.h>
int main()
{
    int size,i = 0, j = 0;
    printf("Enter the size of the array\n");
    scanf("%d",&size);
    int arr[size];
    int reversed[size];
    printf("Enter the array to be reversed\n");
    for(i = 0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i = 0,j=size-1;i<size;i++,j--)
    {
        reversed[i] = arr[j];
        printf("%d%c",reversed[i],32);
    }
    
}
