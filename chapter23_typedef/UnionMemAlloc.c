// 이 코드는 교재의 내용을 참고하였습니다
#include <stdio.h>

typedef struct sbox
{
	int mem1;
	int mem2;
	double mem3;
} SBox;

typedef union ubox
{
	int mem1;
	int mem2;
	double mem3;
} UBox;

int main(void)
{
	SBox sbx;
	UBox ubx;
	printf("%p %p %p \n", &sbx.mem1, &sbx.mem2, &sbx.mem3); 
	printf("%p %p %p \n", &ubx.mem1, &ubx.mem2, &ubx.mem3); // ¸đľÎ ľżŔĎ
	printf("%d %d \n", sizeof(SBox), sizeof(UBox));
	return 0;
}
