#include<stdio.h>
#define M 1.609344 //������ ��ȣ����� ����

void main()
{
    double K = 0;//�Ÿ�(km)
    double Mi = 0;

    //�Ÿ� �Է¹���
    printf("�Ÿ��� �Է��ϼ���. <km>\n");
    scanf_s("%lf", &K);

    //���� ���
    Mi = K * M;

    //���Ϸ� ��ȯ�� �� ���
    printf("%lf<Km> �� %lf<����>�Դϴ�.\n", K, Mi);
}