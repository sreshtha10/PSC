#include<stdio.h>
#include<math.h>
void main(){
	int ch;
	float area,r,s,l,b,a,w,c;
	printf("Enter 1 for circle \n");
	printf("Enter 2 for triangle \n");
	printf("Enter 3 for rectangele \n");
	scanf("%d",&ch);
	switch(ch){
	case 1: 
		printf("Enter the radius of the circle \n");
		scanf("%f",&r);
		area = 3.14*r*r;
		printf("The area of the circle is : %f",area);
		break;
	case 2:
		printf("Enter the sides of the triangle \n");
		scanf("%f%f%f",&a,&b,&c);
		s=(a+b+c)/2;
		area = pow((s*(s-a)*(s-b)*(s-c)),0.5);
		printf("The area of the triangle is %f",area);
		break;
	case 3: 
		printf("Enter the length and width of the rectangle \n");
		scanf("%f%f",&l,&b);
		area = l*w;
		printf("The area of the rectangle is : %f",area);
		break;
	}
}
