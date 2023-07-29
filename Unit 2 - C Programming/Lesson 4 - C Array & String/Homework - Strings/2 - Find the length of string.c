#include <stdio.h>


int main(void)
{
	int len = 0;
	char s[100];
	printf("Enter a string: ");
	fflush(stdout);
	gets(s);
	for(len = 0; s[len] != 0; len++);
	printf("Length of string: %d", len);



	return 0;
}
