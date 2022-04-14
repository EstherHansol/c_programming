#include <stdio.h>

int main(void)
{
	int stats[10], i, j;
	int mode, count, oldcount, oldmode;

	// 10개의 숫자로 구성된 문자열을 입력
	// 예) 1 3 3 3 3 3 3 3 10 10 
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
	printf("최빈값은 %d 이고 %d번 카운트 되었습니다.\n", oldmode, oldcount);

	return 0;
}