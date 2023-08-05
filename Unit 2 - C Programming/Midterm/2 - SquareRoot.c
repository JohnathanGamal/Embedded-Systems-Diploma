#include <stdio.h>
#include <math.h>

double squareRoot(int n);


int main(void)
{
	int num;
	printf("Number = ");
	fflush(stdout);
	scanf("%d", &num);
	printf("Square Root of %d = %.3lf", num, squareRoot(num));
}

double squareRoot(int n){
	return sqrt(n);
}
