#include<stdio.h>
void main()
{
	int number,remainder=0,reverse = 0;
	printf("Enter number whose reverse you want to print");
	scanf("%d",&number);
	while(number  != 0)
	{
		remainder = number % 10;
		reverse = reverse*10+remainder;
		number = number/10;
	}
	printf("%d",reverse);
}