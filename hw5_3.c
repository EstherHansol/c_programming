#include<stdio.h>
#include<string.h>

int main3(void)
{
	int len = 0;
	char voca [100];
	printf("영단어를 입력하세요:");
	scanf_s("%s", voca,sizeof(voca));

	while (voca[len] != '\0')
		len++;

	printf("길이 = %d", len);
	//printf("길이 = %d", strlen(voca));
	return 0;
}