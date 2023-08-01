#include <stdio.h>

int isPrime(int n);

int main(void)
{
	int start, end;
	printf("Enter two numbers(intervals): ");
	fflush(stdout);
	scanf("%d %d", &start, &end);

	// Checking for the start and end values
	if(start >= end || end < 2){
		printf("Incorrect Boundaries, Please Try again");
		return 1;
	}
	printf("Prime numbers between %d and %d are: ", start,end );
	//Looping over all numbers in the interval
	int i;
	for(i = start; i <= end; i++){
		if(isPrime(i))
		{
			printf("%d ", i);
		}
	}

}

int isPrime(int n)
{
	//Dealing with corner cases
	if(n <= 1 ){
		return 0;
	}
	char isPrime = 1;
	int i;
	//Checking that this number won't be divisible by any other number
	for(i = 2; i <= n / 2; i++)
	{
		if(n % i == 0)
		{
			isPrime = 0;
			break;

		}
	}
	return isPrime;


}

