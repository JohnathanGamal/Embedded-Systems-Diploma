#include <stdio.h>

#define MAX 15

int main(void){
	int arr[MAX],rev[MAX], n;
	int* ptr = arr, *revptr = rev;
	printf("Input the number of elements to store in the array (max 15) :");
	fflush(stdout);
	scanf("%d", &n);

	int i;
	for(i = 0; i < n; i++){
		printf("element - %d: ",i + 1);
		fflush(stdout); fflush(stdin);
		scanf("%d", (ptr++));
	}
	ptr--;

	for(i = 0; i <n; i++){
		*revptr = *ptr;
		revptr++;
		ptr--;
	}
	revptr = rev;
	for(i = n; i > 0; i--){
		printf("element - %d: %d\n",i, *(revptr++));
		fflush(stdout);
	}


}
