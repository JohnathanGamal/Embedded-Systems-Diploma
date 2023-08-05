#include <stdio.h>
#include <string.h>

void reverseSentence(char arr[], char rev[]);

int main(void)
{
	char s[100], rev[100] = "";

	printf("Enter a sentence: ");
	fflush(stdout);
	fgets(s, 100, stdin);


	reverseSentence(s,rev);
	printf("%s",rev);

	return 0;
}

void reverseSentence(char arr[], char rev[]){
	int i;
	for(i = strlen(arr) - 1; i >= 0; i--)
	{
		if(arr[i] == '\n')
			arr[i] = '\0';
		if( arr[i] == ' ')
		{
			strcat(rev, (&arr[i] + 1));
			strcat(rev, " ");
			arr[i] = '\0';
		}
		if(i == 0)
			strcat(rev,arr);
	}
}
