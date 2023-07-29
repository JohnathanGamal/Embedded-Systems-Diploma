#include <stdio.h>
#include <string.h>

int main(void)
{
	char s[100];
	printf("Enter the string: ");
	fflush(stdout);
	gets(s);

	int i,len;
	for(i = 0, len = strlen(s); i < len / 2 ; i++)
	{
		s[i] += s[len - i - 1];
		s[len - i - 1] = s[i] - s[len - i - 1];
		s[i] = s[i] - s[len - i - 1];
	}
	printf("Reverse string is : %s ",s);

	return 0;
}
