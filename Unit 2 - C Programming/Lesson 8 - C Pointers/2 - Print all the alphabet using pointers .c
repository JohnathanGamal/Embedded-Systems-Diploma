#include <stdio.h>

#define NUMBER_OF_LETTERS 26

int main(void){
	char arr[NUMBER_OF_LETTERS];
	char* ptr;
	int i;
	ptr = arr;
	for(i = 0; i < NUMBER_OF_LETTERS; i++){
	*ptr = i + 'A';
	ptr++;
	}
	ptr = arr;
	for(i = 0; i < NUMBER_OF_LETTERS; i++){
		printf("%c ", *ptr++);
	}
}
