#include <stdio.h>
int main(void) {
	int i;
	int sum = 0;
	for (i = 0; i < 10; i++) {
		if (i % 2 == 0) continue;

		printf("i=%d sum=%d\n", i, sum);
		sum += i;
	}
	printf("sum = %d\n", sum);
	return 0;
}