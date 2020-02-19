#include<stdio.h>
void main(){
	int a;
	printf("Enter your marks \n");
	scanf("%d",&a);
	if (a==9 || a==10)
		printf("A");
	else if(a==8 || a== 7)
		printf("B");
	else if(a==6 || a==5)
		printf("C");
	else if(a== 4 || a==3)
		printf("D");
	else if(a <3)
		printf("F");
}
