#include <stdio.h>

#define MAT_DIM 2
int main(void)
{
	float matrixA[MAT_DIM][MAT_DIM], matrixB[MAT_DIM][MAT_DIM];
	int i, j;

	//Getting values of 1st matrix
	printf("Enter the elements of the 1st matrix:\n");
	for(i = 0; i < MAT_DIM; i++)
	{
		for(j = 0; j < MAT_DIM; j++)
		{
			printf("Enter a%d%d: ", i + 1, j + 1);
			fflush(stdout);
			scanf("%f", &matrixA[i][j]);
		}
	}
	//Getting values of 2nd matrix while adding both to matrixA
	printf("Enter the elements of the 2nd matrix:\n");
	for(i = 0; i < MAT_DIM; i++)
	{
		for(j = 0; j < MAT_DIM; j++)
		{
			printf("Enter b%d%d: ", i + 1, j + 1);
			fflush(stdout);
			scanf("%f", &matrixB[i][j]);
		}
	}

	printf("Sum of Matrices:\n");
	for(i = 0; i < MAT_DIM; i++)
	{
		for(j = 0; j < MAT_DIM; j++)
		{
			printf("%.1f\t", matrixA[i][j] +matrixB[i][j]);
		}
		printf("\n");
	}




}
