#include<stdio.h>
#include<string.h>
int main()
{
    int len = 0,i = 0,j = 0;
    char a[100] = {0};
    fgets(a,100,stdin);
    for(i = 0;a[i] != '\0';i++)
    {
        len++;
    }
    len = len-1;
    for(i= 0 ,j =len-1; j >= 0 ; i++, j--)
    {
        if(a[i] != a[j])
        {
            printf("Not a pallindrome");
            return 0;
        }
        
    }
    printf("pallindrome");
    
}
