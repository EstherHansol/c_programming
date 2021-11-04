#include<stdio.h>

int main6(void)
{
	int arr[3][9], i, j;
	for (i = 0; i < 3; i++)
		for (j = 0; j < 9; j++)
			arr[i][j] = (i + 2) * (j + 1);

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 9; j++)
			printf("%2d ", arr[i][j]);//%2d는 자릿수 맞춰주려고 넣는것(줄맞춤), %d로만 하면 밀리는게 눈에 보임
		printf("\n");

	}
	return 0;
}