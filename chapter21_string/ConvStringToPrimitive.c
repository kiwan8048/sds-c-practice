// 이 코드는 교재의 내용을 참고하였습니다
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char str[20];
	printf("정수 입력: ");
	scanf("%s", str);
	printf("%d \n", atoi(str)); // 문자열을 정수형으로 변환

	printf("실수 입력: ");
	scanf("%s", str);
	printf("%g \n", atof(str)); // 문자열을 실수형으로 변환
	return 0;
}
