// 이 코드는 교재의 내용을 참고하였습니다
#include <stdio.h>
#define HIT_NUM 5

int main(void)
{
#if HIT_NUM==5
	puts("매크로 상수 HIT_NUM은 현재 5입니다.");
#else // else 이용
	puts("매크로 상수 HIT_NUM은 현재 5가 아닙니다.");
#endif
	return 0;
}
