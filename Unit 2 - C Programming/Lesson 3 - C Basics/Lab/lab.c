#include <stdio.h>

int main(void)
{
	int n;
	printf("Enter number of lines: ");
	fflush(stdout);
	scanf("%i", &n);

	int i,j;
	for(i = 0; i < n; i++)
	{
		for(j = i; j < n; j++)
		{
			printf("%i ",j);
		}
		printf("\n");
	}
	return 0;
}
