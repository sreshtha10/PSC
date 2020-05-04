#include<stdio.h>
int main()
{
    printf("Enter the rows and columns of a matrix\n");
    int row,col;
    scanf("%d",&row);
    scanf("%d",&col);
    int matrix[row][col];
    printf("Enter the values\n");
    for(int i = 0;i<row;i++)
    {
        for(int j = 0;j<col;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    int count = 0;
    printf("Enter the number to be searched\n");
    int number;
    scanf("%d",&number);
    for(int i = 0;i<row;i++)
    {
        int sum = 0;
        for(int j = 0;j<col;j++)
        {
           if(matrix[i][j] == number)
           {
               count++;
           }
        }
    }
    (count)?(printf("Number occured %d times",count)):(printf("Number not found"));
}
