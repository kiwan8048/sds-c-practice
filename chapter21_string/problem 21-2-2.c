#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void remove_0(char str[]) // 개행 문자 제거
{
	int len = strlen(str);
	str[len - 1] = 0; // 개행문자 인덱스를 0으로 지우기
}

int main(void)
{
	char str1[20];
	char str2[20];
	char str3[40];
	puts("문자열 입력");
	fgets(str1, sizeof(str1), stdin);
	remove_0(str1);
	puts("문자열 입력");
	fgets(str2, sizeof(str2), stdin);
	remove_0(str2);
	strcpy(str3, str1); // 문자열 복사
	strcat(str3, str2); // 문자열 붙이기
	puts(str3);
	return 0;
}