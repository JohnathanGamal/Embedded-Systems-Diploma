#include <stdio.h>
#include <string.h>

void reverseArray(int arr[], int n);

int main(void)
{
	int n, arr[100];
	//Getting the array
	printf("Enter number of elements of array: ");
	fflush(stdout);
	scanf("%d", &n);

	printf("Enter elements of the array: ");
	fflush(stdout);
	int i;
	for(i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	reverseArray(arr,n);
	for(i = 0; i < n; i++)
		printf("%d ", arr[i]);

	return 0;
}

void reverseArray(int arr[], int n){
	int i;
	for(i = 0 ; i < n / 2 ; i++)
	{
		arr[i] += arr[n - i - 1];
		arr[n - i - 1] = arr[i] - arr[n - i - 1];
		arr[i] = arr[i] - arr[n - i - 1];
	}
}
