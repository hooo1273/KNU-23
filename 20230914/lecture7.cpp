#include <stdio.h>
int main(void) {
	int jumsu;
	scanf_s("%d", &jumsu);
	
	if (jumsu > 100 || jumsu < 0)
	{
		printf("�߸� �Է��߽��ϴ�\n");
	}
	else if (jumsu >= 90)
	{
		printf("A����\n");
	}
	else if (jumsu >= 80)
	{
		printf("B����\n");
	}
	else if (jumsu >= 70)
	{
		printf("C����\n");
	}
	else if (jumsu >= 60)
	{
		printf("D����\n");
	}
	else (jumsu < 60);
	{
		printf("F����\n");
	}
	return 0;
}