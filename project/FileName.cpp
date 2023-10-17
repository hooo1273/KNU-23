#include <stdio.h>

int main(void) {
	int a, b;
	int c;
	int num[5] = { 0 };

	for (a = 0; a < 5; a++)
	{
		for (b = 0; b < 5; b++)
		{
			if (num[a] < num[b])
			{
				c = num[a];
				num[a] = num[b];
				num[b] = c;
			}
		}
	}
	for (a = 0; a < 5; a++)
	{
		printf("%d ", num[a]);
	}
	return 0;
}