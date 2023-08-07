#include <stdio.h>

struct SDistance{
	int feet;
	float inch;
};

struct SDistance sum(struct SDistance d1, struct SDistance d2);

int main(void){
	struct SDistance d1,d2;
	//Getting 1st distance
	printf("Enter information for 1st distance\n");
	printf("Enter feet: ");
	fflush(stdout);
	scanf("%d", &d1.feet);

	printf("Enter inch: ");
	fflush(stdout);
	scanf("%f", &d1.inch);

	//Getting 2nd distance
	printf("Enter information for 2nd distance\n");
	printf("Enter feet: ");
	fflush(stdout);
	scanf("%d", &d2.feet);

	printf("Enter inch: ");
	fflush(stdout);
	scanf("%f", &d2.inch);

	//Adding and displaying the result
	struct SDistance total = sum(d1,d2);
	printf("Sum of distances = %d'-%.1f\"",total.feet, total.inch);

}

struct SDistance sum(struct SDistance d1, struct SDistance d2){
	struct SDistance total;
	total.feet = d1.feet + d2.feet;
	total.inch = d1.inch + d2.inch;

	while(total.inch > 12){
		total.inch -= 12;
		total.feet ++;
	}
	return total;

}
