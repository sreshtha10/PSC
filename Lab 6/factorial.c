#include<stdio.h>
void main()
{
	int number;
	int factorial = 1;
	printf("Enter the number whose factorial you want to print");
	scanf("%d",&number);
	for(int i=number;i>=1;i--)
	{
		factorial = factorial * i;
	}
	printf("%d",factorial);
}
