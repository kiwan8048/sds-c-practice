// 이 코드는 교재의 내용을 참고하였습니다
#include <stdio.h>

typedef union ubox
{
	int mem1;
	int mem2;
	double mem3;
} UBox;

int main(void)
{
	UBox ubx; // 8바이트 할당
	ubx.mem1 = 20;
	printf("%d \n", ubx.mem2); // 자료형이 같기에 같은 결과
	ubx.mem3 = 7.15; // 8바이트에 걸쳐 저장
	printf("%d \n", ubx.mem1); // 4바이트만 읽기에 이상한 값 출력
	printf("%d \n", ubx.mem2);
	printf("%g \n", ubx.mem3); // 8바이트 출력
	return 0;
}
