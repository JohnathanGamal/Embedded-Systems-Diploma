#include <stdio.h>

int main(void){

	int x,y;
	printf("Enter two integers: ");
	fflush(stdout);
	scanf("%d%d", &x, &y);
	printf("Sum: %d", x + y);
}
