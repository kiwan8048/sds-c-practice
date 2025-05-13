#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct person
{
	char name[20];
	char phoneNum[20];
	int age;
};

int main(void)
{
	struct person arr[3];
	int i;
	for (i = 0; i < 3; i++)
	{
		printf("이름 입력: ");
		scanf("%s", arr[i].name);
		printf("전화번호 입력: ");
		scanf("%s", arr[i].phoneNum);
		printf("나이 입력: ");
		scanf("%d", &arr[i].age);
	}
	for (i = 0; i < 3; i++)
	{
		printf("이름 %s\n", arr[i].name);
		printf("전화번호 %s\n", arr[i].phoneNum);
		printf("나이 %d\n", arr[i].age);
	}
	return 0;

}