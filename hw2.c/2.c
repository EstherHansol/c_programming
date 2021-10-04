#include <stdio.h>

int main(void)
{
	double e, f;

	printf("double 사칙연산을 위한 숫자 2개 입력");
	scanf_s("%lf %lf", &e, &f); // 실수형(double형)의 경우 입력시 서식문자를 %lf 사용
	printf("e x f = %f", e * f); // 실수형(double형)의 경우 출력시 서식문자를 %f 사용 
	return 0;

}



