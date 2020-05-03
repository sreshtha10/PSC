#include <stdio.h>
#include <string.h>

int main () 
{
    int index;
    char str[150]  = {0};
    fgets(str,150,stdin);
    printf("Enter the character you want to search\n");
    char c;
    c = getchar();
    for(int i = 149 ;i >=0;i--)
    {
        if(str[i] == c )
        {
            index = i;
            goto end;
            
        }
    }
    printf("Character not found");
    return 0;
    end:
    printf("Last occurence is at %dth position",index+1);
    return 0;
    
}
