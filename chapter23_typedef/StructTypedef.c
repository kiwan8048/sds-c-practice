// 이 코드는 교재의 내용을 참고하였습니다
#include <stdio.h>

struct point
{
	int xpos;
	int ypos;
};

typedef struct point Point; // typedef 선언

typedef struct point
{
	char name[20];
	char phoneNum[20];
	int age; 
} Person; // 두 표현을 한꺼번에

int main(void)
{
	Point pos = { 10,20 };
	Person man = { "이승기", "010-1212-0001", 21 };
	printf("%d %d \n", pos.xpos, pos.ypos);
	printf("%s %s %d \n", man.name, man.phoneNum, man.age);
	return 0;
}

