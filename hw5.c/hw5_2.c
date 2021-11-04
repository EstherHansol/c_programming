#include<stdio.h>

int main2(void)
{
	int arr[5];
	int max, min, sum, i;

	for (i = 0; i < 5; i++)
	{
		printf("ÀÔ·Â:");
		scanf_s("%d", &arr[i]);
	}
	max = min = sum = arr[0];
	for (i = 1; i < 5; i++)
	{
		sum += arr[i];
		if (max < arr[i])
			max = arr[i];
		if (min > arr[i])
			min = arr[i];
	}
	printf("ÃÖ´ñ°ª: %d\n", max);
	printf("ÃÖ¼Ú°ª: %d\n", min);
	printf("ÃÑÇÕ: %d\n", sum);
	return 0;
}