#include<stdio.h>
#include<string.h>
int main()
{
    int vowels = 0,consonants = 0;
    char a[100];
    fgets(a,100,stdin);
    for(int i = 0; a[i] != '\0';i++)
    {
        if (a[i] == 'a' || a[i] == 'i' || a[i] == 'e'|| a[i] == 'o' || a[i] == 'u' || a[i] == 'A' || a[i] == 'I' || a[i] == 'E'|| a[i] == 'O' || a[i] == 'U' )
        {
            vowels++;
        }
        else if ((a[i] >= 'a' && a[i]<='z' )|| (a[i] >= 'A' && a[i]<='Z'))
        {
            consonants++;
        }
    }
    printf("Vowels:%d%cConsonants:%d",vowels,32,consonants);
}
