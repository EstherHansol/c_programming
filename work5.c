#include <stdio.h>

// 1부터 입력받은 n까지 모든 소수 출력

int main() {
	int n;
	int i;
	int j;
	int count = 0;

	printf("양의 정수를 입력하세요: ");
	scanf_s("%d", &n);

	for (i = 1; i <= n; i++)		//for문_1시작
	{
		for (j = 1; j <= i; j++)				//for문_2 시작
		{
			if (count > 2)
			{
				break;							//소수 아니면 포문_2 탈출
			}
			if (i % j == 0)
			{
				count += 1;                     //카운트 +1 증가
			}
		}										//for문_2 끝
		if (count == 2)                          //약수가 2개 뿐이면 소수라고 판단!
		{
			printf("%d ", i);                   //출력
		}
		count = 0;						  //카운트를 0으로 초기화
	}									  //for문_1 끝


	printf("\n");



}
