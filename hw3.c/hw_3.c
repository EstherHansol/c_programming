#include<stdio.h>

int main()
{
    int num, i, cnt = 0;


    printf("please enter a number : ");
    scanf_s("%d", &num);


    for (i = 2; i < num; i++) {
        printf("%d %% %d = %d\n", num, i, num % i);
        if (num % i == 0)
            cnt++;
    }


    if (cnt == 0)
        printf("It is a prime number.");
    else
        printf("It is not a prime number.");


    return 0;
}