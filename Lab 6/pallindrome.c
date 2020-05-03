#include<stdio.h>
void main()
{
	int number,remainder=0,reverse = 0,palindrome;
	printf("Enter number");
	scanf("%d",&number);
	while(number  != 0)
	{
		remainder = number % 10;
		reverse = reverse*10+remainder;
		number = number/10;
	}
	if(palindrome == reverse)
	{
		printf("Number is palindrome");
	}
	else {
		printf("Number is not palindrome");
	}
}
