#include <stdio.h>

int main (void)
{
	char op;
	float a,b;
	printf("Enter operator either + or - or * or / : ");
	fflush(stdout);
	scanf("%c", &op);
	printf("Enter two operands: ");
	fflush(stdout);
	scanf("%f%f", &a, &b);

	switch(op)
	{
	case '+':
		printf("%.2f + %.2f = %.2f", a, b, a + b);
		break;
	case '-':
		printf("%.2f - %.2f = %.2f", a, b, a - b);
		break;
	case '*':
		printf("%.2f * %.2f = %.2f", a, b, a * b);
		break;
	case '/':
		printf("%.2f / %.2f = %.2f", a, b, a / b);
		break;
	default:
		printf("Incorrect Operator");
		break;

	}

	return 0;


}
