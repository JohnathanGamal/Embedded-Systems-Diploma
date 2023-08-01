#include <stdio.h>

int power (int x , int y);

int main(void)
{
	int base, pow;
	printf("Enter base number: ");
	fflush(stdout);
	scanf("%d",&base);

	printf("Enter power number(positive number): ");
	fflush(stdout);
	scanf("%d", &pow);

	printf("%d^%d = %d",base, pow, power(base,pow));
	return 0;
}

int power (int x , int y)
{

	if(y == 0)
		return 1;

	y--;
	return x*power(x,y);

}
