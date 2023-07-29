#include <stdio.h>

int main(void)
{

	int n;
	int arr[100];
	printf("Enter no of elements: ");
	fflush(stdout);
	scanf("%d", &n);
	if(n > 100 || n < 1)
	{
		printf("No. of elements should be between 1 and 100");
		fflush(stdout);
	}
	int i;
	for(i = 0; i < n; i++)
	{
		scanf("%d",&arr[i]);

	}

	int newElement, loc;
	printf("Enter the element to be inserted: ");
	fflush(stdout);
	scanf("%d", &newElement);

	printf("Enter the location: ");
	fflush(stdout);
	scanf("%d", &loc);

	for(i = n - 1; i >= loc - 1; i--)
	{
		arr[i + 1] = arr[i];
	}
	arr[loc - 1] = newElement;
	for(i = 0; i < n + 1; i++)
		printf("%d ", arr[i]);


}
