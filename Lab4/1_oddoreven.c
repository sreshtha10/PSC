#include<stdio.h>
/* This program will check the given number is even or odd */
void main(){
	int a;
	printf("Enter the number \n");
	scanf("%d",&a);
	if (a %2 != 0)
		printf("%d is odd",a);
	else { if (a%2 == 0 && a != 0)
		printf("%d is even",a);
	       else
		   printf("Number is 0");
	}
}
