#include <stdio.h>

int main(void)
{
	int stats[10], i, j;
	int mode, count, oldcount, oldmode;

	// 10���� ���ڷ� ������ ���ڿ��� �Է�
	// ��) 1 3 3 3 3 3 3 3 10 10 
	printf("Enter 10 numbers: \n");
	for (i = 0; i < 10; i++) {
		scanf_s("%d", &stats[i]);
	}
	oldcount = 0;
	for (i = 0; i < 10; i++) {
		mode = stats[i];
		count = 1;
		for (j = i + 1; j < 10; j++) {
			if (mode == stats[j]) {
				count++;
			}
		}
		if (count > oldcount) {
			oldmode = mode;
			oldcount = count;
		}
	}
	printf("�ֺ��� %d �̰� %d�� ī��Ʈ �Ǿ����ϴ�.\n", oldmode, oldcount);

	return 0;
}