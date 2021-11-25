#include <stdio.h>

/*이것을 응용해서

 

int convCase(int ch)

{

	// 모든 문자의 대소문자간 차의 크기는 같다.

	const int diff = 'a' - 'A';

	if (ch >= 'A' && ch <= 'Z')

		return ch + diff;

	else if (ch >= 'a' && ch <= 'z')

		return ch - diff;

	else

		return -1;

}

int main(void)

{

	int ch;

	printf("문자 입력: ");

	ch = getchar(); // 문자 입력

	ch = convCase(ch); // 문자 변환

	if (ch == -1)

	{

		puts("범위를 벗어난 입력입니다.");

		return -1;

	}

	putchar(ch); // 변환된 문자 출력

	return 0;

} */

 

int convCase(int ch)

{

	// 모든 문자의 대소문자간 차의 크기는 같다.

	const int diff = 'a' - 'A';

	if (ch >= 'A' && ch <= 'Z')

		return ch + diff;

	else if (ch >= 'a' && ch <= 'z')

		return ch - diff;

	else

		return ch;

}

 

int main(void)

{

	char str[100], str2[100];

	printf("Input > ");

	fgets(str, sizeof(str), stdin);

	str[strlen(str) - 1] = 0;

 

	

	printf("Output> ");

	for (int i = 0; i < strlen(str); i++)

		putchar(convCase(str[i]));

	

	return 0;
 

}

 
