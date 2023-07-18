#include <stdio.h>

int main(void)
{
	int n, fac = 1;
	printf("Enter an Integer: ");
	fflush(stdout);
	scanf("%i", &n);
	if(n < 0)
	{
		printf("Error! Factorial of negative number doesn't exist");
	}
	else
	{
		int i;
		for(i = 1; i <= n; i++)
		{
			fac *= i;
		}
		printf("Factorial = %d", fac);

	}


	return 0;
}
