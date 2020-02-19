/* This program is to check a given year is a leap year or not */

#include<stdio.h>
void main(){
	int a;
	printf("Enter the year ! \n");
	scanf("%d",&a);
	if( (a%4 == 0 && a%100 !=0) || (a%4 ==0 && a%100 == 0 && a%400 ==0))
		printf("%d is a leap year",a);
	else
		printf("%d is not a leap year",a);
}
