#include <stdio.h>

int getUnique(int arr[], int len);

int main(void){
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

	printf("The unique number = %d", getUnique(arr, n));
	return 0;
}

int getUnique(int arr[], int len){

	int i, j, repeated = 0;
	for(i = 0; i < len; i++){
		for(j = 0; j < len; j++){
			if(i == j)
				continue;
			if(arr[i] == arr[j]){
				repeated = 1;
				break;
			}
		}
		if(repeated == 0)
			return arr[i];
	}

}
