#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define add(A, B, C) ((A)+(B)+(C))
#define multiply(A, B, C) ((A)*(B)*(C))


int main(void)
{
	int A, B, C;
	printf("3���� ���� �Է�: ");
	scanf("%d %d %d", &A, &B, &C);
	printf("���� ���: %d \n", add(A,B,C));
	printf("���� ���: %d \n", multiply(A,B,C));
}