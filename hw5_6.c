#include<stdio.h>

int main6(void)
{
	int arr[3][9], i, j;
	for (i = 0; i < 3; i++)
		for (j = 0; j < 9; j++)
			arr[i][j] = (i + 2) * (j + 1);

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 9; j++)
			printf("%2d ", arr[i][j]);//%2d�� �ڸ��� �����ַ��� �ִ°�(�ٸ���), %d�θ� �ϸ� �и��°� ���� ����
		printf("\n");

	}
	return 0;
}