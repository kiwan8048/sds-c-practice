#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX(A, B) ((A) >= (B) ? (A) : (B))

int main(void)
{
	double A, B;
	printf("�� ���� �� �Է�: ");
	scanf("%lf %lf", &A, &B);
	printf("%g�� �� ū �� �Դϴ� \n", MAX(A, B));
	return 0;
}