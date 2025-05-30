// 이 코드는 교재의 내용을 참고하였습니다
#include <stdio.h>

// num.c
int num = 0;

// func.c
extern int num;
void Increment(void)
{
	num++;
}

int GetNum(void)
{
	return num;
}

// main.c 
extern int GetNum(void);
extern void Increment(void);
int main(void)
{
	printf("num: %d \n", GetNum());
	Increment();
	printf("num: %d \n", GetNum());
	Increment();
	printf("num: %d \n", GetNum());
	return 0;
}

