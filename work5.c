#include <stdio.h>

// 1���� �Է¹��� n���� ��� �Ҽ� ���

int main() {
	int n;
	int i;
	int j;
	int count = 0;

	printf("���� ������ �Է��ϼ���: ");
	scanf_s("%d", &n);

	for (i = 1; i <= n; i++)		//for��_1����
	{
		for (j = 1; j <= i; j++)				//for��_2 ����
		{
			if (count > 2)
			{
				break;							//�Ҽ� �ƴϸ� ����_2 Ż��
			}
			if (i % j == 0)
			{
				count += 1;                     //ī��Ʈ +1 ����
			}
		}										//for��_2 ��
		if (count == 2)                          //����� 2�� ���̸� �Ҽ���� �Ǵ�!
		{
			printf("%d ", i);                   //���
		}
		count = 0;						  //ī��Ʈ�� 0���� �ʱ�ȭ
	}									  //for��_1 ��


	printf("\n");



}
