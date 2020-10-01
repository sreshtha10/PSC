#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float cube(float num)
{
    /* This can also be done in place of return statement
    float result = num * num * num;
    return result;
    */
    return num * num * num; /* Retun break us out of the function*/
    printf("Hey there");    /*This will not be printed or executed*/
}

int main()
{
    printf("Answer = %f ", cube(325.0));
    return 0;
}