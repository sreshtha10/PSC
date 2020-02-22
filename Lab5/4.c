#include<stdio.h>
int main(){
	int operand;
	float a,b,c;
	printf("Enter 1 for addition \n");
	printf("Enter 2 for substraction \n");
	printf("Enter 3 for division \n");
	printf("Enter 4 for multiplication \n");
	scanf("%d",&operand);
	printf("Enter the first number:  \t");
	scanf("%f",&a);
	printf("Enter the second number: \t");
	scanf("%f",&b);
	switch(operand){
	case 1:
		c =a+b;
		printf("%f",c);
		break;
	case 2:
		c =a-b;
		printf("%f",c);
		break;
	case 3:
		c = a/b;
		printf("%f",c);
		break;
	case 4:
		c= a*b;
		printf("%f",c);
		break;
	default: printf("Syntax Error !");		
	}
}
