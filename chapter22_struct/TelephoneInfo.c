// 이 코드는 교재의 내용을 참고하여 작성하였습니다
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct person // 구조체 선언
{
	char name[20];
	char phoneNum[20];
	int age;
};

int main(void)
{
	struct person man1, man2;
	strcpy(man1.name, "안성준"); // 배열에 문자열을 넣기 위해서 strcpy 사용
	strcpy(man1.phoneNum, "010-1122-3344");
	man1.age = 23;

	printf("이름 입력: "); scanf("%s", &man2.name);
	printf("번호 입력: "); scanf("%s", &man2.phoneNum);
	printf("나이 입력: "); scanf("%d", &man2.age);

	printf("이름: %s \n", man1.name); 
	printf("번호: %s \n" , man1.phoneNum); 
	printf("나이: %d \n", man1.age); 

	printf("이름: %s \n", man2.name); 
	printf("번호: %s \n", man2.phoneNum);
	printf("나이: %d \n", man2.age); 
	return 0;
}
