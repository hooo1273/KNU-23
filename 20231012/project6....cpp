#include <stdio.h>

void sort(int arr[], int count)
{
	int temp;
	for (int i = 0; i < count; i++)
	{
		for (int j = 0; j < count - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;   
				//swap
			}
		}
	}
}

int main(void)
{
	int arr[5] = { 5, 4, 1, 2, 3 };
	sort(arr, 5);
	for (int i = 0; i < 5; i++)
	{
		printf("%d", arr[i]);
	}
	return 0;
}