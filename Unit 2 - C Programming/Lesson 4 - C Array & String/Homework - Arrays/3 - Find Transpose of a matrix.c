#include <stdio.h>

int main(void)
{

	int a[10][10], t[10][10];
	int r, c;
	printf("Enter rows and columns of matrix: ");
	fflush(stdout);
	scanf("%d%d", &r, &c );
	if(r > 10 || r < 1 || c > 10 || c < 1)
	{
		printf("Number of rows and columns should be between 1 and 10");
		return 1;
	}

	//Get elements of the matrix
	int i,j;
	for(i = 0; i < r; i++){
		for(j = 0; j < c; j++)
		{
			printf("Enter element a%d%d : ", i + 1,j + 1);
			fflush(stdout);
			scanf("%d",&a[i][j]);
		}
	}

	//Display the matrix
	printf("Entered Matrix:\n");
	for(i = 0; i < r; i++){
		for(j = 0; j < c; j++)
		{
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}

	printf("Transpose of Matrix: \n");
	for(i = 0; i < c; i++)
	{
		for(j = 0; j < r; j++)
		{
			t[i][j] = a[j][i];
			printf("%d\t", t[i][j]);
		}
		printf("\n");
	}

}
