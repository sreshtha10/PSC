#include<stdio.h>
void main(){
	int a,b;
	printf("Enter the first number \n");
	scanf("%d",&a);
	printf("Enter the second number \n");
	scanf("%d",&b);
	if ( b>a && b%a ==0)
		printf(" %d is a multiple of %d",a,b);
	else if ( a>b && a%b ==0)
		printf(" %d is a multiple of %d",b,a);
	     else
		     printf("Neither of them is a multiple of the other.");
}
