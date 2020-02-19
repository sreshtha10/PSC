#include<stdio.h>
void main(){
	int a,b;
	printf("Enter the month number \n");
	scanf("%d",&a);
	printf("Enter the year \n");
	scanf("%d",&b);
	if (a==1 || a== 3 || a==5 || a==7 || a==8 || a==10 || a==12)
	       printf("Number of days are 31");
	else{ if( a==2){
		if((b%4 ==0 && b%100 != 0) ||( b%400==0)) 	
			printf(" Month has 29 days");
		else
			printf("Month has 28 days");
	}
	else
		printf("Month has 30 days");
	}

}

