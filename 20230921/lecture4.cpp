#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
int main(void) {
	double x = 0;
	double y = 0;

	int count = 0, circle = 0;
	srand(time(NULL));

	while (count < 10000)
	{
		x = (double)rand() / (double)RAND_MAX;
		y = (double)rand() / (double)RAND_MAX;
		count++;

		while (1) {
			for (int i = 0; i < 1000000; i++) {
				x = (double)rand() / (double)RAND_MAX;
				y = (double)rand() / (double)RAND_MAX;
				count++;
				if ((x * x) + (y * y) <= 1)
				{
					circle++;
				}
			}
			printf("%d진행..원주율  : %0.15\n", count, (circle / count) * 4);
		}
		return 0;
	}
}

	//제곱 연산 pow(x, y)