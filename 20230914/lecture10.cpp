//구구단 2~9단 출력
// 5단은 출력 X

#include <stdio.h>
int main(void) {
	for (int i = 2; i <= 9; i++)
	{
		if (i == 5) continue;
		for (int j = 1; j <= 9; j++)
		{
			printf("%d * %d = %d\n", i, j, (i * j));
		}
	}
	return 0;
}