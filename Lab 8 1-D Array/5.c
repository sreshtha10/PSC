#include<stdio.h>
int main()
{
    printf("Enter the size of character array\n");
    int n;
    scanf("%d",&n);
    char arr[n];
    printf("Enter the character array: ");
    getchar();
    for(int i = 0;i<n;i++)
    {
        arr[i] = getchar();
    }
    for(int i = 0;i<n;i++)
    {
        printf("%d%c",arr[i],32);
    }
    
}
