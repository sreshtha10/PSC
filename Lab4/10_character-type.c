#include<stdio.h>

void main(){
	char a;
	printf("Enter the character \n");
	scanf("%c",&a);
	if((a>='a' && a<='z') || (a>='A' && a<='Z')){
		if (a =='a' || a=='i' || a== 'o'|| a=='e'|| a=='u')
			printf("Character is a vowel");
		else
			printf("Character is a consonant");
	}
	else
		printf("Character is an integer");

}
