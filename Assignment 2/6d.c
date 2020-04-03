#include<stdio.h>
#include<math.h>
int main()
{
    /*Sum of the series e^x*/
    int n,x;
    printf("Enter the number of terms \n");
    scanf("%d",&n);
    printf("Enter the value of x");
    scanf("%d",&x);
    float sum = 0;
    
    for(int i = 0; i <n;i++)
    {
        int b = 1;
        for(int j = i;j>=1;j--)
        {
            b = b*j;
        }
        sum=sum + (float)pow(x,i)/(float)b;
    }
    printf("%f",sum);
}
