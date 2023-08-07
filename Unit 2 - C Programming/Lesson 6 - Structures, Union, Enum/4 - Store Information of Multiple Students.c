#include <stdio.h>

#define NO_OF_STUDENTS 10

struct SStudent{
	char m_name[100];
	int m_roll;
	float m_marks;
};

void readData(struct SStudent* s);

void printData(struct SStudent* s);

int main(void)
{
	//Getting data from user
	struct SStudent student[NO_OF_STUDENTS];
	printf("Enter information of students:\n");
	int i;
	for(i = 0; i < NO_OF_STUDENTS; i++){
		printf("\nFor roll number %d\n", i + 1);
		student[i].m_roll = i + 1;
		readData(&student[i]);

	}
	//Displaying the data
	printf("\nDisplaying information of students: \n\n");
	for(i = 0; i < NO_OF_STUDENTS; i++){
		printData(&student[i]);

	}

	}

void readData(struct SStudent * s){
	printf("Enter name: ");
	fflush(stdout);	fflush(stdin);
	gets((*s).m_name);

	printf("Enter marks: ");
	fflush(stdout);
	scanf("%f", &(*s).m_marks);

}

void printData(struct SStudent* s){
	printf("\n\nInformation for roll number %d:", s->m_roll);
	printf("\nName: %s", (*s).m_name);
	printf("\nMarks: %.1f", (*s).m_marks);
}

