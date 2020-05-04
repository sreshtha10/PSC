#include<stdio.h>
#include<string.h>
int main()
{
    int i = 0, j = 0;
    char arr[100]; 
    char str1[40];
    char str2[20];
    gets(str1);
    gets(str2);
    //String Contcatination
    strcat(str1,str2);
    printf("%s\n",str1);
    //String Copy
    strcpy(arr,str2);
    printf("%s\n",arr);
    //String lenght
    int len = strlen(arr);
    printf("%d",len);
    
    
}
