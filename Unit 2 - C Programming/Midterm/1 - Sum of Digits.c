#include <stdio.h>

int digitsAdder(int n);

int main(void)
{
	int num;
	printf("Number = ");
	fflush(stdout);
	scanf("%d", &num);
	//Use the function to get the sum
	printf("Sum = %d", digitsAdder(num));
}

int digitsAdder(int n){
	int sum = 0;
	while (n != 0){
		sum += n % 10;
		n /= 10;

	}
	return sum;
}
