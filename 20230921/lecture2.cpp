#include <stdio.h>
int main(void) {
	int sel, num1, num2;
	printf("1.���ϱ� 2.���� 3.���ϱ� 4.������");
	scanf_s("%d", &sel);

	calculator(sel, num1, num2);

	return 0;
}

void calculator(int selector, int num1, int num2)
{
	printf("���� 1�� �Է��Ͻÿ� : ");
	scanf_s("%lf", &num1);

	printf("���� 2�� �Է��Ͻÿ� : ");
	scanf_s("%lf", &num2);

	if (selector == 1) sum(num1, num2);
	else if (selector == 2) sub(num1, num2);
	else if (selector == 3) mul(num1, num2);
	else if (selector == 4) div(num1, num2);
}