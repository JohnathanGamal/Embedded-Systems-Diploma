#include <stdio.h>

int main(void)
{
	int n;
	printf("Enter the number of data: ");
	fflush(stdout);
	scanf("%d", &n);

	if(n < 1 || n > 100)
	{
		printf("Number should be between 1 and 100");
		return 1;
	}
	float data[100];
	int i;
	float sum = 0;
	for(i = 0; i < n; i++){
		printf("%d. Enter number: ", i + 1);
		fflush(stdout);
		scanf("%f", &data[i]);
		sum += data[i];
	}
	printf("Average = %.2f", sum / n);



}
