#include <stdio.h>

int sum(int start, int end);

int main(void){
	int start, end;
	//Getting the interval boundaries
	printf("Enter starting number: ");
	fflush(stdout);
	scanf("%d", &start);

	printf("Enter ending number: ");
	fflush(stdout);
	scanf("%d", &end);
	printf("Sum of numbers from %d to %d = %d", start, end, sum(start,end));


}

int sum(int start, int end){

	if(start == end)
		return start;

	return start + sum(start + 1, end);
}
