// 이 코드는 교재의 내용을 참고하였습니다
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX(A, B) ((A) >= (B) ? (A) : (B))

int main(void)
{
	double A, B;
	printf("두 개의 수 입력: ");
	scanf("%lf %lf", &A, &B);
	printf("%g가 더 큰 수 입니다 \n", MAX(A, B));
	return 0;
}
