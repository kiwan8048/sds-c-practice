//이 코드는 교재의 내용을 참고하였습니다.


#include <stdio.h>

int main(void)
{
	int ch1, ch2;
	ch1 = getchar(); // 문자 입력
	ch2 = fgetc(stdin); // 엔터 키 입력
	putchar(ch1); // 문자 출력
	fputc(ch2, stdout); // 엔터 키 출력
	return 0;
}
