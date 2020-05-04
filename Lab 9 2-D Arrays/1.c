#include<stdio.h>
int main()
{
    int marks[3][5];
    for(int i = 0;i<3;i++)
    {
        printf("Enter the marks of student %d: ",i+1);
        for(int j = 0;j<5;j++)
        {
            scanf("%d",&marks[i][j]);
        }
    }
    for(int i = 0;i<3;i++)
    {
        int sum = 0;
        for(int j = 0;j<5;j++)
        {
            sum += marks[i][j];
        }
        printf("Totoal marks of student %d: %d\n",i+1,sum);
        printf("Average Marks of student %d: %f\n",i+1,sum/(float)5);
    }
}
