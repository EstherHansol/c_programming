#include<stdio.h>
#define M 1.609344 //마일을 기호상수로 정의

void main()
{
    double K = 0;//거리(km)
    double Mi = 0;

    //거리 입력받음
    printf("거리를 입력하세요. <km>\n");
    scanf_s("%lf", &K);

    //마일 계산
    Mi = K * M;

    //마일로 변환한 값 출력
    printf("%lf<Km> 는 %lf<마일>입니다.\n", K, Mi);
}