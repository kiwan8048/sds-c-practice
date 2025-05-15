// 이 코드는 교재의 내용을 참고하였습니다
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct person
{
	char name[20]; // ¹è¿­µµ Àü´ÞµÊ
	char phoneNum[20];
	int age;
} Person;

void ShowPersonInfo(Person man)
{
	printf("name: %s \n", man.name);
	printf("phone: %s \n", man.phoneNum);
	printf("age: %d \n", man.age);
}


Person ReadPersonInfo(void) // ¹ÝÈ¯ÀÌ PersonÇü
{
	Person man;
	printf("name? "); scanf("%s", man.name);
	printf("phone? "); scanf("%s", man.phoneNum);
	printf("age? "); scanf("%d", &man.age);
	return man;
}



int main(void)
{
	Person man = ReadPersonInfo();
	ShowPersonInfo(man);
	return 0;
}
