#include<stdio.h>
int main()
{
    /* Coverting the decimal to base 5 */
    float n;
    int a,count = 0,b[10]={0},d[10]={0};
    scanf("%f",&n);
    a = n;
    n = n -a ;
    /* n is the fractional part and a is the integer part */
    /* Converting integer part */
    for (int i = 1; a != 0; i++,count++)
    {   
        b[10-i] = a%5;
        a =a /5;
    }
    /* Eliminating the zeros */
    int c[count];
    for (int i = 1; i <= count; i++)
    {
        c[i]= b[10-i];
    }
    /* Printing the integer part */
    for (int i = 0; i < count; i++)
    {   
        printf("%d",c[count-i]);
    }
    
    /*Converting fractional part */
   for (int i = 0; i <= 10; i++)
   {
       d[i] = n*5;
       n = (n*5)-d[i];
   }
   printf(".");
   /* Printing the fractional part */
    for (int i = 0; i <= 10; i++)
    {
        printf("%d",d[i]);
    }
    
}
