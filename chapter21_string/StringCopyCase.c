// 이 코드는 교재의 내용을 참고하였습니다
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[20] = "1234567890";
	char str2[20];
	char str3[5];

	/*  case1  */
	strcpy(str2, str1);
	puts(str2);

	/*  case2  */
	strncpy(str3, str1, sizeof(str3));
	puts(str3);

	/*  case3  */
	strncpy(str3, str1, sizeof(str3) - 1);
	str3[sizeof(str3) - 1] = 0;
	puts(str3);
	return 0;

}
