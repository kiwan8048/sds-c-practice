// 이 코드는 교재의 내용을 참고하였습니다
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[20];
	char str2[20];
	printf("문자열 입력 1: ");
	scanf("%s", str1);
	printf("문자열 입력 2: ");
	scanf("%s", str2);

	if (!strcmp(str1, str2)) // 문자열 비교
	{
		puts("두 문자열은 완벽히 동일합니다");
	}
	else
	{
		puts("두 문자열은 동일하지 않습니다");
		if (!strncmp(str1, str2, 3)) // 앞 세글자만 비교
		{
			puts("그러나 앞 세글자는 동일합니다");
		}
	}
	return 0;
}
