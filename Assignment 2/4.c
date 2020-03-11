#include<stdio.h>
int main()
{
    int N;
    printf("Enter the number N \n");
    scanf("%d",&N);
    float data[N],x;
    for (int i = 1; i <= N; i++)
    {
        scanf("%f",&data[i]);
    }
    /* Sorting the array */
    for (int i = 1; i <= N; i++)
    {
        for (int j = i+1; j <= N; j++)
        {
            if (data[i] < data[j])
            {
                x = data[i];
                data[i]= data[j];
                data[j]= x;
            }
        }
    }
    printf("Largest and Second Largest number are %f and %f",data[1],data[2]);
}