#include <stdio.h>

int main(void){
	//Taking input from user
	float a, b;
	printf("Enter value of a: ");
	fflush(stdout);
	scanf("%f", &a);
	printf("Enter value of b: ");
	fflush(stdout);
	scanf("%f", &b);
	//Swapping
	float tmp;
	tmp = a;
	a = b;
	b = tmp;
	//Printing the numbers after swapping
	printf("\nAfter swapping, value of a = %f", a);
	printf("\nAfter swapping, value of b = %f", b);



	return 0;
}
