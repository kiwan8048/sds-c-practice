// 이 코드는 교재의 내용을 참고하였습니다
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// define ADD 1
#define MIN 0

int main(void)
{
	int num1, num2;
	printf("두 개의 정수 입력: ");
	scanf("%d %d", &num1, &num2);

#ifdef ADD // 매크로 ADD가 정의되었다면
	printf("%d + %d = %d \n", num1, num2, num1 + num2);
#endif
#ifdef MIN // 매크로 MIN가 정의되었다면
	printf("%d - %d = %d \n", num1, num2, num1 - num2);
#endif
	return 0;
}
