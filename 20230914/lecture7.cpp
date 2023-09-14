#include <stdio.h>
int main(void) {
	int jumsu;
	scanf_s("%d", &jumsu);
	
	if (jumsu > 100 || jumsu < 0)
	{
		printf("잘못 입력했습니다\n");
	}
	else if (jumsu >= 90)
	{
		printf("A학점\n");
	}
	else if (jumsu >= 80)
	{
		printf("B학점\n");
	}
	else if (jumsu >= 70)
	{
		printf("C학점\n");
	}
	else if (jumsu >= 60)
	{
		printf("D학점\n");
	}
	else (jumsu < 60);
	{
		printf("F학점\n");
	}
	return 0;
}