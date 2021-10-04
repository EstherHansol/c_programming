#include <stdio.h>

int main(void)
{
	int a, b, c, d;
	printf("ÁÂ»ó´ÜÀÇ xÁÂÇ¥:");
	scanf_s("%d", &a);
	printf("ÁÂ»ó´ÜÀÇ yÁÂÇ¥:");
	scanf_s("%d", &b);
	printf("¿ì»ó´ÜÀÇ xÁÂÇ¥:");
	scanf_s("%d", &c);
	printf("¿ì»ó´ÜÀÇ yÁÂÇ¥:");
	scanf_s("%d", &d);

	printf("µÎÁ¡ÀÌ ÀÌ·ç´Â Á÷»ç°¢ÇüÀÇ ³ÐÀÌ´Â %d ÀÔ´Ï´Ù.", (c - a) * (d - b));
	return 0;


}