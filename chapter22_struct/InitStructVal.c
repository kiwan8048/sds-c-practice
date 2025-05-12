#include <stdio.h>

struct point // 구조체 선언
{
	int xpos;
	int ypos;
};

struct person
{
	char name[20];
	char phoneNum[20];
	int age;
};

int main(void)
{
	struct point pos = { 10,20 }; // 초기화
	struct person man = { "이승기", "010-1212-0001", 21 }; // 초기화
	printf("%d %d \n", pos.xpos, pos.ypos);
	printf("%s %s %d", man.name, man.phoneNum, man.age);
	return 0;
}