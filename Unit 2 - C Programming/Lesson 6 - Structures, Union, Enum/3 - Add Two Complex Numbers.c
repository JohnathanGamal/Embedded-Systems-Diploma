#include <stdio.h>

struct SComplex{
	float real;
	float imag;
};

struct SComplex sum(struct SComplex n1, struct SComplex n2);

int main(void){
	struct SComplex n1,n2;
	//Getting 1st number
	printf("For 1st complex number\n");
	printf("Enter real and imaginary parts respectively: ");
	fflush(stdout);
	scanf("%f%f", &n1.real, &n1.imag);

	//Getting 2nd number
	printf("For 2nd complex number\n");
	printf("Enter real and imaginary parts respectively: ");
	fflush(stdout);
	scanf("%f%f", &n2.real, &n2.imag);


	//Adding and displaying the result
	struct SComplex result = sum(n1,n2);
	printf("Sum = %.1f + %.1fi",result.real, result.imag);

}

struct SComplex sum(struct SComplex n1, struct SComplex n2){
	struct SComplex result;
	result.real = n1.real + n2.real;
	result.imag = n1.imag + n2.imag;


	return result;

}
