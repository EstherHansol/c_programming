#include<stdio.h>
#include<string.h>

int main3(void)
{
	int len = 0;
	char voca [100];
	printf("���ܾ �Է��ϼ���:");
	scanf_s("%s", voca,sizeof(voca));

	while (voca[len] != '\0')
		len++;

	printf("���� = %d", len);
	//printf("���� = %d", strlen(voca));
	return 0;
}