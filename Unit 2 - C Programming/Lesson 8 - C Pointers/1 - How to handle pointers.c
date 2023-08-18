#include <stdio.h>

int main(void){
	int m;
	int* ab;
	//Assigning a value to variable m
	m = 29;
	printf("Address of m: 0x%p\n", &m);
	printf("Value of m: %d\n\n", m);

	//Pointer ab points at variable m
	ab = &m;
	printf("Now ab is assigned with the address of m.\n");

	printf("Address of pointer ab: 0x%p\n", ab);
	printf("Content of pointer ab: %d\n\n", *ab);

	//Changing the value of m and noticing its effect on content of ab
	m = 34;
	printf("The value of m assigned to 34 now.\n");
	printf("Address of pointer ab: 0x%p\n", ab);
	printf("Content of pointer ab: %d\n\n", *ab);

	//Changing the content of ab and noticing its effect on the value of m
	*ab = 7;
	printf("Address of m: 0x%p\n", &m);
	printf("Value of m: %d\n\n", m);

}
