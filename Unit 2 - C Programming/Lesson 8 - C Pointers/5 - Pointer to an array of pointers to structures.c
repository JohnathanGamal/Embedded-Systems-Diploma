#include <stdio.h>

struct SEmployee{
	char m_name[100];
	int m_ID;
};

int main(void){
	struct SEmployee e1 = {"John", 1045};
	struct SEmployee e2 = {"Wael", 2073};
	struct SEmployee e3 = {"Karim", 4659};

	struct SEmployee* employees[3] = {&e1,&e2,&e3};

	struct SEmployee* (*ptr)[3] = &employees;
	int i;
	for(i = 0; i < 3; i++){
		printf("Employee %d Name: %s\n",i + 1, (*ptr)[i]->m_name);
		printf("Employee %d ID: %d\n\n",i + 1, (*ptr)[i]->m_ID);

	}
}
