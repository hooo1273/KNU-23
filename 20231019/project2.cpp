#include <stdio.h>
#include <stdlib.h>

struct Student {
	int sno;
	char name[10];
	int score;
};

int main(void) {
	int num_students;
	struct Student* s;

	printf("�л� �� �Է�: ");
	scanf_s("%d", &num_students);
	s = (struct Stduent*)malloc(10 * sizeof(struct Student));
	
	for (int i = 0; i < num_students; i++) {
		printf("�л�# %d-%d �й� �Է�: ", num_students, i + 1);
		scanf_s("%d", &(s[i].sno));

		printf("�л�# %d-%d �̸� �Է�: ", num_students, i + 1);
		scanf_s("%d", s[i].name, 10);

		printf("�л�# %d-%d ���� �Է�: ", num_students, i + 1);
		scanf_s("%d", &(s[i].score));


	}

	int sum = 0;
	for (int i = 0; i < num_students; i++) {
		sum += s[i].s;
	}
	printf("d\n", sum);
	free(s);
	return 0;
}