#include <stdio.h>
int main(void) {
	int i, j;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < i; j++)
		{
			printf("   ");
		}
		if (i % 2 == 0) printf("| 0 |");
		else printf("| X |");
		printf("\n--------------------\n");
	}
	return 0;
}