// 이 코드는 교재의 내용을 참고하였습니다
#include <stdio.h>
#include <stdlib.h>

#define NAME "홍길동"
#define AGE 24
#define PRINT_ADDR puts("주소: 경기도 용인시 \n")

int main(void)
{
	printf("이름: %s \n", NAME);
	printf("나이: %d \n", AGE);
	PRINT_ADDR;
	return 0;
}
