// 이 코드는 교재의 내용을 참고하였습니다
#include <stdio.h>
#define SQUARE(X) X*X // 잘못된 매크로 정의

int main(void)
{
	int num = 20;
	printf("Square of num: %d \n", SQUARE(num));
	printf("Square of -5: %d \n", SQUARE(-5));
	printf("Square of 2.5: %g \n", SQUARE(2.5));

	printf("Square of 3+2: %d \n", SQUARE(3 + 2)); // 3+2*3+2 = 11로 사칙연산에 의해 의도하지 않은 계산이 발생함
	return 0;
}
