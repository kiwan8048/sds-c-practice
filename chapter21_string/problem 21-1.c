#include <stdio.h>

int main(void)
{
	int ch;
	ch = getchar(); // stdin으로부터 문자 입력
	if ('A' <= ch && ch <= 'Z') // 대문자인지 체크
	{
		ch += 32; // 소문자로 변환
	}
	else if ('a' <= ch && ch <= 'z') // 소문자인지 체크
	{
		ch -= 32; // 대문자로 전환
	}
	else //오류
	{
		printf("잘못 입력하였습니다");
		return 0;
	}
	putchar(ch); // stdout에 문자 출력
	return 0;
}