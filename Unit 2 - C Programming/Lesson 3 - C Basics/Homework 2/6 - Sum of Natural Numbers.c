#include <stdio.h>

int main(void){
	int n, sum = 0;
	printf("Enter an integer: ");
	fflush(stdout);
	scanf("%i", &n);

	int i;
	for(i = 1; i <= n; i++)
	{
		sum += i;
	}

	printf("Sum = %d", sum);
}
