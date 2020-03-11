#include<stdio.h>
int main()
{
    int N,b;
    printf("Enter the length of the array \n");
    scanf("%d",&N);
    int data[N];
    for (int i = 1; i <= N; i++)
    {
        scanf("%d",&data[i]);
    }
    printf("Enter the number to be searched \n");
    scanf("%d",&b);
    for (int i = 1; i <=N ; i++)
    {
        if (data[i] == b)
        {
            goto found;         
        }
    }
nf:
    printf("Not found");
    return 0;
found:
    printf("Found");
    return 0;
}