#include "stdio.h"

int main3(void)
{
	int n, result = 0;

	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &n);

	while (n > 0)
	{
		result += n % 10;
		n /= 10;
	}

	printf("�Է��� ������ �� �ڸ� ���� ���� %d �̴�.\n", result);
	return 0;
}
