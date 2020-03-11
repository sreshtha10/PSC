#include<stdio.h>
int main()
{
    int marks[50],count[20] = {0};
    printf("Enter marks between 0 -20 \n");
    for (int i = 1; i <= 50; i++)
    {
        scanf("%d",&marks[i]);
        count[marks[i]]++;
    }
    for (int i = 1 ; i <=20; i++)
    {
        printf("Frequency of %d is %d \n",i,count[i]);
    }
}
