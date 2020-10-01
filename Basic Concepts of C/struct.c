#include <stdio.h>
#include <string.h>
struct Student
{
    char name[20];
    char sec[10];
    int age, class;
    double gpa;
};

int main()
{
    struct Student s1;
    s1.age = 20;
    s1.gpa = 9.18;
    s1.class = 12;
    strcpy(s1.name, "Rishav");
    strcpy(s1.sec, "E");

    printf("%s\n", s1.name);
    printf("%d\n", s1.class);
    printf("%s\n", s1.sec);
    printf("%d\n", s1.age);
    printf("%lf\n", s1.gpa);
}