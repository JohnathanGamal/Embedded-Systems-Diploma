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
	int element,foundFlag;
	printf("Enter element to be searched: ");
	fflush(stdout);
	scanf("%d", &element);
	for(i = 0; i < n; i++)
	{
		if(element == arr[i])
		{
			foundFlag = 1;
			break;
		}
	}
	if (foundFlag == 1)
		printf("Number found at location = %d", i + 1);
	else
		printf("Number not found.");
}
