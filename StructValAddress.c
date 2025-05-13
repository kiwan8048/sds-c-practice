// 이 코드는 교재의 내용을 참고하여 작성하였습니다
#include <stdio.h>

struct point
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
	struct point pos = { 10,20 };
	struct person man = { "이승기", "010-1212-0001", 21 };
	printf("%p %p \n", &pos, &pos.xpos); // 구조체 변수의 주소값과 구조체 변수의 첫번째 변수와의 주소 비교
	printf("%p %p \n", &man, man.name);
	return 0;
}
