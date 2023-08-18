#include <stdio.h>
#include <string.h>
int main(void){
	char s[100], rev[100];
	printf("Input a string: ");
	fflush(stdout);
	fgets(s,100,stdin);
	//Removing the newline character from the string
	s[strcspn(s,"\n")] = '\0';

	printf("Reverse of the string is: " );
	char *ps = s, *prev = rev + strlen(s) - 1;
	while(*ps != '\0'){
		*prev = *(ps++);
		prev--;
	}
	prev = rev;
	*(prev + strlen(s)) = '\0';
	printf("%s", prev);

}
