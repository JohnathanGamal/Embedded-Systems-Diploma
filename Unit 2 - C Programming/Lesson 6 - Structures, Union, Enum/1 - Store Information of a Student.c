#include <stdio.h>

struct SStudent{
	char m_name[100];
	int m_roll;
	float m_marks;
};

int main(void)
{
	//Getting data from user
	struct SStudent s;
	printf("Enter information of students:\n\n");
	printf("Enter name: ");
	fflush(stdout);
	gets(s.m_name);

	printf("Enter roll number: ");
	fflush(stdout);
	scanf("%d", &s.m_roll);

	printf("Enter marks: ");
	fflush(stdout);
	scanf("%f", &s.m_marks);
	//Displaying the data
	printf("\nDisplaying Information");
	printf("\nName: %s", s.m_name);
	printf("\nRoll: %d", s.m_roll);
	printf("\nMarks: %.2f", s.m_marks);

}
