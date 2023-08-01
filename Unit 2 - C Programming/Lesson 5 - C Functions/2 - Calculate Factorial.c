#include <stdio.h>

int getFact(int n);

int main(void)
{
	int num;
	printf("Enter a positive integer: ");
	fflush(stdout);
	scanf("%d", &num);
	if(num < 0)
	{
		printf("Error! the input is a negative number");
		return 1;
	}
	printf("Factorial of %d = %d", num, getFact(num));

}

int getFact(int n)
{
	if(n == 1 || n == 0)
	{
		return 1;
	}

	return getFact(n - 1) * n;
}
