#include<stdio.h>
int  main(){
	int call_no;
	float bill;
	printf("Enter the number of calls \n");
	scanf("%d",&call_no);
	switch(call_no){
	case 1 ... 100: goto c4;
			break;
	case 101 ... 150: goto c1;
			  break;
	case 151 ... 200: goto c2;
			  break;
	default: goto c3;
		 break;
	}

	c1:
		bill = 200 + (0.6*((call_no)-100));
		goto end;
	c2:
		bill =200 + (0.6*50) +(0.5*((call_no)-150));
		goto end;
	c3:
		bill = 200 + (0.6*50) +(0.5*50)+ (0.4*((call_no)-200));
		goto end;
	c4:
		bill = 200;
		goto end;
	end:
		printf("Your bill is %f",bill);
}
