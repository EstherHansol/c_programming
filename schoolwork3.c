#include<stdio.h>

/*
* 2) �迭�� ����� �� �� ���� ū ���� ���� ���� ���� ã�� �̵� ���� ���� �ٲپ� �����ϴ� �Լ�
* 1)�迭�� ���ҵ��� ����ϴ� �Լ�
* 3) �迭, �迭�� ũ��� �Բ� ������ �Ű������� ���� ���� �޾� �� ���� ����Ǿ� �ִ� �迭 ������ ��÷�� ���� ��ȯ�ϴ� �Լ�
* (���� ���� �迭�� ���� ��� -1 ��ȯ)
*/

void printa(int* prt, int len)
{
	int i;
	for (i = 0; i < len; i++)
	{
		printf("%d", prt[i]);
	}
	printf("\n");
}

void changea(int* prt, int len)
{
	int i, temp;
	int* min;
	int* max;

	max = prt;
	min = prt;

	for (i = 0; i < len; i++)
	{
		if (prt[i] > *max)
		{
			max = &prt[i];

		}
		if (prt[i] < *min)
		{
			min = &prt[i];
		}
	}

	temp = *max;
	*max = *min;
	*min = temp;

}
int searcha(int x, int* prt, int len)
{
	int i;
	for (i = 0; i < len; i++)
	{
		if (x == prt[i])
		{
			return i;
		}
		else
			continue;
	}
	return -1;
}

/*
main() �Լ������� ����ڷκ��� 5���� ������ �о� �迭�� ������ �� 1), 2), 1)�� ������ �Լ��� ȣ���ϰ� ����ڷκ��� �迭���� ã���� �ϴ� ������ �߰��� �Է� �޾� 3)�� �Լ��� ȣ���Ͽ� ���� ����ϵ���
*/

int main(void)
{
	int a[5];
	int x;
	printf("�迭�� ������ ���� 5�� �Է� :");
	scanf_s("%d %d %d %d %d", &a[0], &a[1], &a[2], &a[3], &a[4]);
	printa(a, sizeof(a) / sizeof(int));
	changea(a, sizeof(a) / sizeof(int));
	printa(a, sizeof(a) / sizeof(int));

	printf("ã���� �ϴ� ���� �Է�:");
	scanf_s("%d", &x);
	printf("%d", searcha(x, a, sizeof(a) / sizeof(int)));

}