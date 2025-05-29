#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define PI 3.1415
#define Area(rad) ((rad)*(rad)*(PI))

int main(void)
{
	double rad;
	printf("반지름 입력: ");
	scanf("%lf", &rad);
	printf("넓이: %f", Area(rad));
	return 0;
}