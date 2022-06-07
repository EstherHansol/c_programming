#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#define MAX_NUM 50

typedef struct
{
	char name[20];
	char address[20];
	char number[20];

}Phone;
void insert(Phone* ptr, int* count)
{

	printf("�̸�>>");
	scanf_s("%s", ptr[*count].name, 20);
	printf("�ּ�>> ");
	scanf_s("%s", ptr[*count].address, 20);
	printf("��ȭ��ȣ>>");
	scanf_s("%s", ptr[*count].number, 20);
	(*count)++;

}

int deleted(Phone* ptr, int* count)
{
	char name[30];
	int i, j;

	if (*count > 0) {
		printf("�̸�>> ");
		scanf_s("%s", name, 20);

		for (i = 0; i < MAX_NUM; i++)
		{
			if (strcmp(name, ptr[i].name) == 0)
			{
				(*count)--;
				printf("%s�� �����Ǿ����ϴ�.\n", name);
				if (i != MAX_NUM - 1)
				{
					for (j = i; j < MAX_NUM; j++)
					{
						strcpy(ptr[j].name, ptr[j + 1].name);
						strcpy(ptr[j].address, ptr[j + 1].address);
						strcpy(ptr[j].number, ptr[j + 1].number);
					}
					*ptr[MAX_NUM - 1].name = NULL;
					*ptr[MAX_NUM - 1].address = NULL;
					*ptr[MAX_NUM - 1].number = NULL;
					return 0;
				}
				else
				{
					*ptr[MAX_NUM - 1].name = NULL;
					*ptr[MAX_NUM - 1].address = NULL;
					*ptr[MAX_NUM - 1].number = NULL;
				}
				return 0;
			}

		}
		printf("%s�� ��ϵ��� ���� ����Դϴ�.\n", &name);
		return 0;
	}

	else {
		printf("��ϵ� ������ �����ϴ�.\n\n");
		return 0;
	}
}
int search(Phone* ptr, int* count)
{
	char name[30];
	int i;

	if (*count > 0) {
		printf("�̸�>>");
		scanf_s("%s", name, 20);

		for (i = 0; i < MAX_NUM; i++) {

			if (!strcmp(name, ptr[i].name))
			{

				printf("%s ", ptr[i].name);
				printf("%s ", ptr[i].address);
				printf("%s \n", ptr[i].number);

				return 0;
			}
		}
		printf("%s�� ��ϵ��� ���� ����Դϴ�.\n", &name);
		return 0;
	}
	else {
		printf(" ��ϵ� ������ �����ϴ�. \n\n");
		return 0;
	}
}


void printall(Phone* ptr, int* count)
{
	int i = 0;

	if (*count > 0) {
		for (i = 0; i < *count; i++) {
			printf("%s ", ptr[i].name);
			printf("%s ", ptr[i].address);
			printf("%s\n", ptr[i].number);
		}

	}
	else
		printf("����� ������ �����ϴ�. \n\n");
}



int main(void)
{
	Phone arr[MAX_NUM];
	//arr[0] = { "���Ѽ�","����" ,"010-5064-7582" };
	//arr[1] = {"ȫ�浿","����" ,"010-2222-2222"};
	//arr[2] = {"������","����", "010-3333-3333"};
	int count = 3, num;

	printf("--------------------------------------------------------------\n");
	printf("��ȭ��ȣ ���� ���α׷��� �����մϴ�. ���Ϸ� �������� �ʽ��ϴ�.\n");
	printf("--------------------------------------------------------------\n");

	while (1)
	{
		printf("����:0, ����:1, ã��:2, ��ü����:3, ����:4 >>");
		scanf_s("%d", &num);

		if (num == 0)
		{
			insert(arr, &count);
		}
		else if (num == 1)
		{
			deleted(arr, &count);
		}
		else if (num == 2)
		{
			search(arr, &count);
		}
		else if (num == 3)
		{
			printall(arr, &count);
		}
		else if (num == 4)
		{
			printf("���α׷��� �����մϴ�.");
			return 0;
		}
		else
		{
			printf("�ùٸ� ���ڸ� �Է��ϼ���.");
		}

	}
	return 0;
}