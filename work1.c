#include <stdio.h>


int main1(void)

{

	double r, h, area1, area2, len, vol1, vol2; 
	
	//area1=원의 면적, area2=원기둥의 겉넓이 

	 //len=둘레 vol1=원기둥 부피 vol2=구의 부피 h=원기둥의 높이

	double x = 3.14;



	printf("원의 반지름을 입력하시오.");
	scanf_s("%lf", &r);



	printf("원기둥의 높이를 입력하시오.");
	scanf_s("%lf", &h);


	area1 = r * r * x;

	len = 2 * r * x;

	area2 = 2 * x * r * h + 2 * x * r * r;

	vol1 = r * r * x * h;

	vol2 = 4.0 / 3 * 3.14 * r * r * r; //정수나누기 정수를 해버리면 1이나와버림

		//(4 / 3) * x * r * r * r;
		//3 * 3.14 * r * r * r / 4;



	printf("원의 면적은 %f, 둘레는 %f 이다. \n", area1, len);

	printf("원기둥의 겉넓이는 %f, 부피는 %f 이다.\n", area2, vol1);

	printf("구의 부피는 %f 이다.", vol2);



	return 0;

}
