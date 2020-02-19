/* This program will give the absolute value of a given number */
#include<stdio.h>
void main(){
	int a;
	printf("Enter the number \n");
	scanf("%d",&a);
	if (a < 0){
		a = a*-1;
	}
	printf("Absolute value of the number is: %d",a);
}
