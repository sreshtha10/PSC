/* This program will count the total number of days counting from January */
#include<stdio.h>
void main(){
	int a,b,sum,days;
	printf("Enter the month number \n");
        scanf("%d",&a);
	printf("Enter the year number \n");	       
	scanf("%d",&b);
	sum =0;
	while(a>=1){
			if (a==1 || a==3 || a==5 || a==7 || a==8 || a==10 || a==12)
					{days = 31;}
			else { 
				if (a==2){
					if (b%4==0 && b%100 != 0 || b%400 == 0){
						days =29;}
					else{
						days =28;}
			}
				else if( a==4 || a ==6 || a==9 || a==11) 
					{days =30;}
			}
	sum= days+sum;
	a=a-1;

	}

	printf("Total no of day are %d",sum);
}	
