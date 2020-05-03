#include<stdio.h>
#include<string.h>
int main()
{
    int count = 0,i = 0;
    char str[50];
    printf("Enter the string\n");
    fgets(str,50,stdin);
    while(str[i] != '\0')
    {
        if(str[i] == 32 || str[i+1] == '\0')
        {
            count++;
        }
        i++;
    }
    printf("Number of words are %d",count);
}
