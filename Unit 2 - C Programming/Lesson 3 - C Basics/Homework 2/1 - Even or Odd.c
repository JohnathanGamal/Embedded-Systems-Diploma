#include <stdio.h>

int main(void){
	int num;
	printf("Enter an integer you want to check: ");
	fflush(stdout);
	scanf("%i", &num);
	if(num % 2 == 0)
		printf("%d is even.", num);
	else
		printf("%d is odd.", num);


	return 0;
}
