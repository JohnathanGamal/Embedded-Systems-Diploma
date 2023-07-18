#include <stdio.h>
#include <ctype.h>

int isVowel(char c);

int main(void){
	char c;
	printf("Enter an alphabet: ");
	fflush(stdout);
	scanf("%c", &c);
	if(isalpha(c) == 0){
		printf("%c is not an alphabet",c);
		return 1;
	}
	else if (isVowel(c) == 1)
	{
		printf("%c is a vowel.", c);
	}
	else
	{
		printf("%c is a consonant.", c);
	}



	return 0;
}

int isVowel(char c){
	char vow[] = {'a','A','e','E','i','I','o','O','u','U'};
	int i = 0;
	for(i = 0; i < sizeof(vow); i++){
		if (c == vow[i])
			return 1;
	}
	return 0;

}
