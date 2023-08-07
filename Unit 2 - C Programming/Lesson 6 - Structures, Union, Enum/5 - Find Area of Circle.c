#include <stdio.h>

#include <math.h>

#define _USE_MATH_DEFINES
#define AREA(r) M_PI * r * r

int main(void) {
	float r;
	printf("Enter the radius: ");
	fflush(stdout);
	scanf("%f", &r);

	printf("Area = %.2f", AREA(r));
}
