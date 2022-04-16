#include<stdio.h>

/*
* 2) 배열에 저장된 값 중 가장 큰 값고 가장 작은 값을 찾아 이들 값을 서로 바꾸어 저장하는 함수
* 1)배열의 원소들을 출력하는 함수
* 3) 배열, 배열의 크기와 함께 정수를 매개변수를 통해 전달 받아 이 값이 저장되어 있는 배열 원소으 ㅣ첨자 값을 반환하는 함수
* (정수 값이 배열에 없는 경우 -1 반환)
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
main() 함수에서는 사용자로부터 5개의 정수를 읽어 배열에 저장한 후 1), 2), 1)의 순서로 함수를 호출하고 사용자로부터 배열에서 찾고자 하는 정수를 추가로 입력 받아 3)번 함수를 호출하여 값을 출력하도록
*/

int main(void)
{
	int a[5];
	int x;
	printf("배열에 저장할 정수 5개 입력 :");
	scanf_s("%d %d %d %d %d", &a[0], &a[1], &a[2], &a[3], &a[4]);
	printa(a, sizeof(a) / sizeof(int));
	changea(a, sizeof(a) / sizeof(int));
	printa(a, sizeof(a) / sizeof(int));

	printf("찾고자 하는 정수 입력:");
	scanf_s("%d", &x);
	printf("%d", searcha(x, a, sizeof(a) / sizeof(int)));

}