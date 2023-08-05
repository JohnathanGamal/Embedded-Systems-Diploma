#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void reverse(char src[], char dest[], int len);

int main(void)
{
	int num;
	printf("Number = ");
	fflush(stdout);
	scanf("%d", &num);
	char orig[15], rev[15];

	itoa(num, orig, 10);

	reverse(orig,rev,strlen(orig));
	printf("Reversed Number = %d", atoi(rev));
}

void reverse(char src[], char dest[], int len)
{

	if(len <= 0)
	{
		//Putting null at the end of the reversed string
		dest[strlen(src)] = '\0';
		return;
	}

	dest[strlen(src) - len] = src[len - 1];
	len--;
	reverse(src, dest, len);


}
