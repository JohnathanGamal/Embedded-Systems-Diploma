#include <stdio.h>

int main(void){
	float a,b,c;
	printf("Enter three numbers: ");
	fflush(stdout);
	scanf("%f%f%f", &a,&b,&c);

	float largest = (a > b ? a : b) > c ? (a > b ? a : b) : c;

	printf("Largest number = %f", largest);


}
