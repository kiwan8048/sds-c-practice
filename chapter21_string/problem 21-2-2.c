#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void remove_0(char str[]) // ���� ���� ����
{
	int len = strlen(str);
	str[len - 1] = 0; // ���๮�� �ε����� 0���� �����
}

int main(void)
{
	char str1[20];
	char str2[20];
	char str3[40];
	puts("���ڿ� �Է�");
	fgets(str1, sizeof(str1), stdin);
	remove_0(str1);
	puts("���ڿ� �Է�");
	fgets(str2, sizeof(str2), stdin);
	remove_0(str2);
	strcpy(str3, str1); // ���ڿ� ����
	strcat(str3, str2); // ���ڿ� ���̱�
	puts(str3);
	return 0;
}