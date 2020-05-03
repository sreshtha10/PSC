#include <stdio.h>
#include <ctype.h>

int main () {
   int i = 0;
   char str[150];
   fgets(str,150,stdin);
   
   while(str[i]) {
      putchar (toupper(str[i]));
      i++;
   }
   
   return 0;
   
}
