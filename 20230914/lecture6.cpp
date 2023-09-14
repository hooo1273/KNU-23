#include <stdio.h>
int main(void) {
	int input_num;
	scanf_s("%d", &input_num);

	if (input_num > 0)
	{
		printf("양의 정수 (%d)\n", input_num);
	}
	else if (input_num < 0)
	{
		printf("음의 정수 (%d)\n", input_num);
	}
	else
		printf("0입니다");
	return 0;
}