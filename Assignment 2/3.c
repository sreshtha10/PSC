#include<stdio.h>
#include<math.h>
int main()
{
    int N;
    float count= 0,mean;
    printf("Enter the value of N \n");
    scanf("%d",&N);
    float data[N];
    printf("Enter the values \n");
    for (int i = 1; i <= N; i++)
    {
        scanf("%f",&data[i]);
        count = count+ data[i];
    }
    /* Mean */
    mean = count/N;
    printf("Mean = %f \n",mean);
    count = 0;
    for (int i = 1; i <= N; i++)
    {
        count = count + (pow(data[i],2)-mean);
    }
    /* SD */ 
    printf("Standard deviation is %f \n",count/N);
    /* Variance */
    printf("Variance is %f",pow((count/N),0.5));
}