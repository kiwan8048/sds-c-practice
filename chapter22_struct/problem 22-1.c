#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct employee // 구조체 정의
{
	char name[20];
	char ID[20];
	int salary;
};


int main(void)
{
	struct employee me;
	puts("이름 입력 "); scanf("%s", me.name); // 입력
	puts("주민등록번호 입력 "); scanf("%s", me.ID);
	puts("급여 입력 "); scanf("%d", &me.salary);
	printf("이름: %s \n", me.name); // 출력
	printf("주민등록번호: %s \n", me.ID);
	printf("급여: %d \n", me.salary);
	return 0;
}