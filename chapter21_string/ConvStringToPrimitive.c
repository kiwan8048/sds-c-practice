#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char str[20];
	printf("���� �Է�: ");
	scanf("%s", str);
	printf("%d \n", atoi(str)); // ���ڿ��� ���������� ��ȯ

	printf("�Ǽ� �Է�: ");
	scanf("%s", str);
	printf("%g \n", atof(str)); // ���ڿ��� �Ǽ������� ��ȯ
	return 0;
}