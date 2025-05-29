// 이 코드는 교재의 내용을 참고하였습니다
#include <stdio.h>

#define DiffABS(X, Y) (((x)>(y))?((x)-(y)):((y)-(x))) // 대소문자 실수

int main(void)
{
	printf("두 값의 차: %d \n", DiffABS(5, 7));
	printf("두 값의 차: %g \n", DiffABS(1.8, -1.4));
	return 0;
}
