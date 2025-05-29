// 이 코드는 교재의 내용을 참고하였습니다
#include <stdio.h>
#define HIT_NUM 7

int main(void)
{
#if HIT_NUM==5
	puts("매크로 상수 HIT_NUM은 현재 5입니다");
#elif HIT_NUM==6 // elif 사용
	puts("매크로 상수 HIT_NUM은 현재 6입니다");
#elif HIT_NUM==7 // elif 사용
	puts("매크로 상수 HIT_NUM은 현재 7입니다");
#else 
	puts("매크로 상수 HIT_NUM은 5, 6, 7은 확실히 아닙니다.");
#endif
	return 0;
}
