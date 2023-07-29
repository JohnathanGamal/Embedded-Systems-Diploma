#include <stdio.h>
#include <string.h>
int main(void)
{
	char s[100];
	char c;
	printf("Enter a string: ");
	fflush(stdout);
	gets(s);
	printf("Enter a character to find frequency: ");
	fflush(stdout);

	c = getchar();
	int i,count = 0;
	for(i = 0; i < strlen(s); i++)
	{
		if(s[i] == c){
			count++;
		}
	}
	printf("Frequency of %c = %i", c,count);

}
