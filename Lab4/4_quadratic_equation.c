/* This program will provide a solution for a quadratic equation */
#include<stdio.h>
#include<math.h>
int main(){
	float a,b,c,d,r1,r2,real,img;
	printf("Enter the coeffient of x-sqaure \n");
	scanf("%f",&a);
	printf("Enter the coeffient of x \n");
	scanf("%f",&b);
	printf("Enter the constant \n");
	scanf("%f",&c);
	d = (pow(b,2)-(4*a*c));
	if (d >=0){
		/* roots are real */
		r1 =(-b + pow(d,0.5))/(2*a);
		r2 =(-b - pow(d,0.5))/(2*a);
		printf("Roots are: %f and %f",r1,r2);
		}
	else {
		/* roots are imaginary */
		d = d*-1;
		real = -b/(2*a);
		img = pow(d,0.5)/(2*a);
		printf("Roots are: %f +i%f and %f - i%f",real,img,real,img);
	}
}

	

