#include <stdio.h>

int main5(void)
{
	int len = 0, i;
	char voca[100], max=-128;

	printf("영단어 입력: ");
	scanf_s("%s", voca, sizeof(voca));

	while (voca[len] != 0)
		len++;

		for (i = 0; i < len; i++)
			if (max < voca[i])
				max = voca[i];
		printf("가장 큰 아스키 코드값의 문자 : %c\n", max);
		return 0;

}