#include <stdio.h>


int main1(void)

{

	double r, h, area1, area2, len, vol1, vol2; 
	
	//area1=���� ����, area2=������� �ѳ��� 

	 //len=�ѷ� vol1=����� ���� vol2=���� ���� h=������� ����

	double x = 3.14;



	printf("���� �������� �Է��Ͻÿ�.");
	scanf_s("%lf", &r);



	printf("������� ���̸� �Է��Ͻÿ�.");
	scanf_s("%lf", &h);


	area1 = r * r * x;

	len = 2 * r * x;

	area2 = 2 * x * r * h + 2 * x * r * r;

	vol1 = r * r * x * h;

	vol2 = 4.0 / 3 * 3.14 * r * r * r; //���������� ������ �ع����� 1�̳��͹���

		//(4 / 3) * x * r * r * r;
		//3 * 3.14 * r * r * r / 4;



	printf("���� ������ %f, �ѷ��� %f �̴�. \n", area1, len);

	printf("������� �ѳ��̴� %f, ���Ǵ� %f �̴�.\n", area2, vol1);

	printf("���� ���Ǵ� %f �̴�.", vol2);



	return 0;

}
