#include<stdio.h>
#include<math.h>
int main()
{
    /*Sum of the series sin(x)*/
    int n,x;
    printf("Enter the number of terms \n");
    scanf("%d",&n);
    printf("Enter the value of x");
    scanf("%d",&x);
    float sum = 0;
    int count = 2;
    for(int i = 1; i <n;i+=2,count++)
    {
        int b = 1;
        for(int j = i;j>=1;j--)
        {
            b = b*j;
        }
        sum=sum + (float)(pow(-1,count)*pow(x,i))/(float)b;
    }
    printf("%f",sum);
}
