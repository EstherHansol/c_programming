#include "stdio.h"

int main3(void)
{
	int n, result = 0;

	printf("정수를 입력하시오 : ");
	scanf_s("%d", &n);

	while (n > 0)
	{
		result += n % 10;
		n /= 10;
	}

	printf("입력한 정수의 각 자리 수의 합은 %d 이다.\n", result);
	return 0;
}
