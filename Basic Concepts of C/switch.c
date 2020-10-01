#include <stdio.h>
int main()
{
    char grade;
    printf("Enter your grade: ");
    scanf("%c", &grade);

    switch (grade)
    {
    case 'A':
        printf("You did fantastic");
        break;
    case 'B':
        printf("You did good");
        break;
    case 'C':
        printf("You did alright");
        break;
    case 'D':
        printf("You did poor");
        break;
    case 'E':
        printf("You did very poor");
        break;
    case 'F':
        printf("You failed");
        break;

    default:
        printf("Invalid");
        break;
    }
}