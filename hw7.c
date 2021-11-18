#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

float stdev(float param[]);
int main()
{
	float arr[5];
	
	printf("Enter 5 real numbers:");
	scanf("%f%f%f%f%f", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);
	float stdev_value = stdev(arr);
	

	printf("Standard Deviation = %f", stdev_value);
	
}

float stdev(float arr[])
{
	float sum = arr[0] + arr[1] + arr[2] + arr[3] + arr[4];
	float avg = sum / 5.0f;
	float temp = 0;
	int i;
	for (i = 0; i < 5; i++)
		temp += pow(arr[i]-avg, 2);
	return sqrt(temp / 5);

	
	printf("%f", temp);
}

