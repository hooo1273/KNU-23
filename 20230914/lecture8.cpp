#include <stdio.h>
int main(void) {
	int jumsu;
	scanf_s("%d", &jumsu);
	
	if (jumsu > 100 || jumsu < 0)
	{
		printf("�߸� �Է��߽��ϴ�.\n");
	}

	int jumsu_div = jumsu / 10;
	switch (jumsu_div)
	{
	case 10:
	case 9:
		printf("A\n");
		break;
	case 8:
		printf("B\n");
		break;
	case 7:
		printf("C\n");
		break;
	case 6:
		printf("D\n");
		break;
	default:
		printf("F\n");
	}
	return 0;
}