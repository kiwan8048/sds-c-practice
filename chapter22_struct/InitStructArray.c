// 이 코드는 교재의 내용을 참고하여 작성하였습니다
#include <stdio.h>

struct person
{
	char name[20];
	char phoneNum[20];
	int age;
};

int main(void)
{
	struct person arr[3] = {                  // 구조체 배열 초기화
		{"이승기", "010-1212-0001", 21},
		{"정지영", "010-1313-0002", 22},
		{"한지수", "010-1717-0003", 19}
	}; 
	int i;
	for (i = 0; i < 3; i++)
	{
		printf("%s %s %d \n", arr[i].name, arr[i].phoneNum, arr[i].age);
	}
	return 0;
}
