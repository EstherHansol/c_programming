#include <stdio.h>

int main() {

	int num;
	scanf_s("%d", &num);
	int result = ~num + 1;
	printf("%d\n", result);
	return 0;
}