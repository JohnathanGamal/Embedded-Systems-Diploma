#include <stdio.h>

int onesCounter(int n);

int main(void)
{
	int num;
	printf("Number = ");
	fflush(stdout);
	scanf("%d", &num);

	printf("Max number of ones = %d", onesCounter(num));
}

int onesCounter(int n){
	int count = 0, max = 0;

	while(n != 0){
		count = 0;
		while((n & 1) == 1){
			count ++;
			n >>= 1;
		}
		if(count > max)
		{
			max = count;
		}

		n>>= 1;
	}
	return max;
}
