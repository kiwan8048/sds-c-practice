#include <stdio.h>

#define DiffABS(X, Y) (((x)>(y))?((x)-(y)):((y)-(x))) // ��ҹ��� �Ǽ�

int main(void)
{
	printf("�� ���� ��: %d \n", DiffABS(5, 7));
	printf("�� ���� ��: %g \n", DiffABS(1.8, -1.4));
	return 0;
}