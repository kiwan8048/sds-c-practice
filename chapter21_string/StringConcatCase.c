#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[20] = "First~";
	char str2[20] = "second~";
	char str3[20] = "Simple num: ";
	char str4[20] = "1234567890";
	/*case1*/
	strcat(str1, str2);
	puts(str1);
	/*case2*/
	strncat(str3, str4, 7); // 7개를 이어붙이고 널문자 삽입
	puts(str3);
	return 0;
}