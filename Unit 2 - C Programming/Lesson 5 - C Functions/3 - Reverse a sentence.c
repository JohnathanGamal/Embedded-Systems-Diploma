#include <stdio.h>
#include <string.h>

#define MAX_ARRAY_SIZE 100

void reverse(char src[], char dest[], int len);

int main(void)
{

	char orig[MAX_ARRAY_SIZE], rev[MAX_ARRAY_SIZE];

	printf("Enter a sentence: ");

	//Getting input from user
	fflush(stdout);
	gets(orig);
	//Reversing sentence
	reverse(orig,rev,strlen(orig));
	printf("%s", rev);
}

void reverse(char src[], char dest[], int len)
{

	if(len <= 0)
	{
		//Putting null at the end of the reversed sentence
		dest[strlen(src)] = '\0';
		return;
	}

	dest[strlen(src) - len] = src[len - 1];
	len--;
	reverse(src, dest, len);


}
