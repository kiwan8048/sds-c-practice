#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define PI 3.1415
#define Area(rad) ((rad)*(rad)*(PI))

int main(void)
{
	double rad;
	printf("������ �Է�: ");
	scanf("%lf", &rad);
	printf("����: %f", Area(rad));
	return 0;
}