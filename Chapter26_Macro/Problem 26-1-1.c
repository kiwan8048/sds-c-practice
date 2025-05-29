// 이 코드는 교재의 내용을 참고하였습니다
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define add(A, B, C) ((A)+(B)+(C))
#define multiply(A, B, C) ((A)*(B)*(C))


int main(void)
{
	int A, B, C;
	printf("3개의 정수 입력: ");
	scanf("%d %d %d", &A, &B, &C);
	printf("덧셈 결과: %d \n", add(A,B,C));
	printf("곱셈 결과: %d \n", multiply(A,B,C));
}
