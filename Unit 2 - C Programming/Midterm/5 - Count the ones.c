#include <stdio.h>

int onesCounter(int n);

int main(void)
{
	int num;
	printf("Number = ");
	fflush(stdout);
	scanf("%d", &num);

	printf("Number of ones = %d", onesCounter(num));
}

int onesCounter(int n){
	int count = 0;
	while(n != 0){
		if((n & 1) == 1)
			count ++;
		n >>= 1;
	}
	return count;
}
