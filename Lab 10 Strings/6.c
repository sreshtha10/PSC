#include <stdio.h>
int main()
{
   char s[1000];
   int count = 0;
   printf("Input a string\n");
   gets(s);
   while (s[count] != '\0')
      count++;
    printf("%d",count);
}
