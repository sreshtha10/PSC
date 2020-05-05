#include<stdio.h>
int main()
{
    int marks[50],count = 0;
    printf("Enter marks between 0 -20 \n");
    for (int i = 0; i<50; i++)
    {
        scanf("%d",&marks[i]);
    }
    for(int i = 0;i<=20;i++)
    {
        count = 0;
        for(int j = 0;j<50;j++)
        {
            if(marks[j] == i)
            {
                count++;
            }
        }
        printf("The frequency of %d marks is %d",i,count);
    }
}
