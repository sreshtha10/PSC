#include<stdio.h>
void main(){
	int a,b,c,area;
	printf("Enter the sides of the triangle \n");
	scanf("%d%d%d",&a,&b,&c);
	if (a+b>c && b+c>a && a+c>b){
		area = (a+b+c)/2;
		printf("Area = %d",area);
	}
	else
		printf("Condition not satisfied");

}

