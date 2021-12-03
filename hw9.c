#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//실습
/*typedef struct point
{
	int xpos;
	int ypos;
}Point;

void SwapPoint(Point* ptr1, Point* ptr2)
{
	
	Point temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;

}

int main(void) {
	Point pos1 = {2,4 };
	Point pos2 = { 5,7 };

	SwapPoint(&pos1, &pos2);
	printf("[%d,%d]\n", pos1.xpos, pos1.ypos);
	printf("[%d,%d]\n", pos2.xpos, pos2.ypos);
	return 0;
}*/

/*struct point
{
	int xpos;
	int ypos;
};

int main(void)
{
	struct point arr[3];
	int i;
	for (i = 0; i < 3; i++)
	{
		printf("���� ��ǥ �Է�: ");
		scanf("% d % d", &arr[i].xpos, &arr[i].ypos);
	}
	for (i = 0; i < 3; i++)
	{
		printf("[%d, %d]", &arr[i].xpos, &arr[i].ypos);
		
	}
}*/

//과제
typedef struct cities {
	char name[20];
	char country[20];
	int populations;
}Cities;

void inputArr(Cities* ptr)
{
	printf("Input three cities: \n" );
	for (int i = 0; i < 3; i++)
	{
		printf("Name> ");
		fgets(ptr[i].name, sizeof(ptr[i].name), stdin);
		ptr[i].name[strlen(ptr[i].name) - 1] = 0;
		printf("Country> ");
		fgets(ptr[i].country, sizeof(ptr[i].country), stdin);
		ptr[i].country[strlen(ptr[i].country) - 1] = 0; 
		printf("Population> ");
		scanf("%d", &ptr[i].populations);
		while (getchar() != '\n'); 
	}
	
	
}
int main(void)
{
    Cities arr[3];
	int i;
	inputArr(arr);
	for (i = 0; i < 3; i++)
	{
		printf("%s in %s with a population of %d \n", arr[i].name, arr[i].country, arr[i].populations); //scanf�� �ƴ϶� &�Ⱦ�
	}
}



/*typedef struct point {
	int xpos;
	int ypos;
}Point;

typedef struct Rectangle {
	Point ul;
	Point lr;
}Rectangle;

void ShowRecArea(Rectangle rec) {
	printf("����: %d \n",
		(rec.lr.xpos - rec.ul.xpos) * (rec.lr.ypos - rec.ul.ypos));
}

void ShowRecPos(Rectangle rec)
{
	printf("�� ���: [%d, %d] \n", rec.ul.xpos, rec.ul.ypos);
	printf("�� �ϴ�: [%d, %d] \n", rec.ul.xpos, rec.lr.ypos);
	printf("�� ���: [%d, %d] \n", rec.lr.xpos, rec.ul.ypos);
	printf("�� �ϴ�: [%d, %d] \n", rec.lr.xpos, rec.lr.ypos);
}

int main(void)
{
	Rectangle rec1 = { {1,1}, {4,4} };
	Rectangle rec2 = { {0,0}, {1,1} };

	ShowRecArea(rec1);
	ShowRecPos(rec1);
	ShowRecArea(rec2);
	ShowRecPos(rec2);
	return 0;
}*/
