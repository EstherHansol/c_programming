#include <stdio.h>

int main(void)
{
	int a, b, c, d;
	printf("�»���� x��ǥ:");
	scanf_s("%d", &a);
	printf("�»���� y��ǥ:");
	scanf_s("%d", &b);
	printf("������ x��ǥ:");
	scanf_s("%d", &c);
	printf("������ y��ǥ:");
	scanf_s("%d", &d);

	printf("������ �̷�� ���簢���� ���̴� %d �Դϴ�.", (c - a) * (d - b));
	return 0;


}