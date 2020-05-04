#include<stdio.h>

int main()
{

    int numbers[10],left[5],right[5];
    printf("Enter 10 numbers: ");

    for(int i=0;i<10;i++)
    {
        scanf("%d",&numbers[i]);
        if(i <5)
        {
            left[i] = numbers[i];
        }
        else{
            right[i-5] = numbers[i];
        }
    }
    for(int i = 0;i<5;i++)
    {
        printf("%d",left[i]);
    }
    printf("\n");
    for(int i = 0;i<5;i++)
    {
        printf("%d",right[i]);
    }
    return 0;
}
