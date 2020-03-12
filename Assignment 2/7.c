#include<stdio.h>
int main()
/* converting decimal to base 5 */
{
    int num, n[10] = {0};
    float inp,f;
    printf("Enter the number \n");
    scanf("%f",&inp);
    num = inp;
    f = inp -num;
    /* converting integer part */
    for (int i = 0; num != 0; i++)
    {
        n[i] = num%5;
        num = num/5;
    }
    for ( int i = 0; i <= 10; i++)
    {
        printf("%d",n[10-i]);
    }
    
}