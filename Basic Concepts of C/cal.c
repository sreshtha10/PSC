#include <stdio.h>
int add(int x, int y)
{
    int c;
    c = x + y;
    printf("\nThe sum is=%d\n\n", c);
}
int sub(int d, int e)
{
    int f;
    f = d - e;
    printf("\nThe subtraction is=%d\n\n", f);
}
int mult(int x, int y)
{
    int i;
    i = x * y;
    printf("\nThe multiplication is=%d\n\n", i);
}
double div(double x, double y)
{
    double m;
    m = x / y;
    printf("\nDivison is=%.3lf\n\n", m);
}
int sq(int x, int y)
{
    int sqr1, sqr2;
    sqr1 = x * x;
    sqr2 = y * y;
    printf("\nSquare of %d is=%d\n", x, sqr1);
    printf("\nSquare of %d is=%d\n\n", y, sqr2);
}
int cube(int x, int y)
{
    int cub1, cub2;
    cub1 = x * x * x;
    cub2 = y * y * y;
    printf("\nCube of %d is=%d\n", x, cub1);
    printf("\nCube of %d is=%d\n\n", y, cub2);
}
int percentage(int x, int y)
{
    float per1, per2;
    per1 = 100 * x / y;
    per2 = 100 * y / x;
    printf("\n%d is %.3f %c of %d\n", x, per1, 37, y); //% sign using ASCII code 37
    printf("\n%d is %.3f %% of %d\n\n", y, per2, x);   //% sign by traditional %% code
}

int main()
{
    int x, y, options = 0;
    printf("Enter numbers one by one:\n");
    scanf("%d%d", &x, &y);
    printf("\nWelcome! What do you want to perform on your calculator?\n");
    printf("\n1.For Addition enter 1\n\n2.For Subtraction enter 2\n");
    printf("\n3.For Multiplication enter 3\n\n4.For Division enter 4\n");
    printf("\n5.To find Square of the numbers enter 5\n\n6.To find Cube of the numbers enter 6\n");
    printf("\n7.For Percentage of both numbers enter 7\n");
    printf("\nEnter your choice:");
    scanf("%d", &options);
    switch (options)
    {
    case 1:
        add(x, y);
        break;
    case 2:
        sub(x, y);
        break;
    case 3:
        mult(x, y);
        break;
    case 4:
        div(x, y);
        break;
    case 5:
        sq(x, y);
        break;
    case 6:
        cube(x, y);
        break;
    case 7:
        percentage(x, y);
        break;
    default:
        printf("\n\nPlease enter number from the given list!\n");
        main();
    }
}