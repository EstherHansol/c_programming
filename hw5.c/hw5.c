#include<stdio.h>

/*void findOdd(int *ptr, int arySize)
{
	printf(" Ȧ�� ���: ");
	int i;
	for (i = 0; i < arySize; i++) {
		if (ptr[i] % 2 != 0) {
			printf
		}
	}
}*/


	/* int array[5];
	int len;
	printf("5���� ������ �Է��ϼ���: ");
	for (int i = 0; i < 5; i++)
		scanf_s("%d", &array[i]);

	printf("\n");
	len = sizeof(array) / sizeof(int);

	
	return 0;*/
int main(void) {
	int arr[5];
	int i;
	
	printf("5�� ������ �Է��ϼ��� :");
	for (i = 0; i < 5; i++) {
		scanf_s("%d", &arr[i]);
	}

	printf("Ȧ�� ���:");
	for (i = 0; i < 5; i++)
	{
		if (arr[i] % 2 == 1)
		{
			printf("%d ", arr[i]);
		}
	}
	printf("\n¦�� ���:");
	for (i = 0; i < 5; i++)
	{
		if (arr[i] % 2 == 0)
		{
			printf("%d ", arr[i]);
		}
	}

	return 0;
}