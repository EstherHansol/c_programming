#include<stdio.h>
#include<string.h>

int main4(void)
{
	int len = 0, i;
	char voca[100], temp;
	printf("���ܾ� �Է�: ");
	scanf_s("%s", voca, sizeof(voca));

	len = strlen(voca) - 1;

	while (len >= 0)
	{
		printf("%c", voca[len]);
		len--;
	}
	
	return 0;
}