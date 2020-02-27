#include<stdio.h>
void main()
{
	int number,table;
	printf("Enter the number whose table you want to print");
	scanf("%d",&number);
	for(int i=1;i<=10;i++)
	{
		table = number*i;
		printf("%d \n",table);
	}
}