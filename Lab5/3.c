#include<stdio.h>
void main(){
	int wn;
	printf("Enter the week number \n");
	scanf("%d",&wn);
	switch(wn){
	case 1: printf("Sunday");
		break;
	case 2: printf("Monday");
		break;
	case 3: printf("Tuesday");
		break;
	case 4: printf("Wednesday");
		break;
	case 5: printf("Thursday");
		break;
	case 6: printf("Friday");
		break;	
	case 7: printf("Saturday");
		break;
	default: printf("Please enter the number between one and seven");
	}
}
