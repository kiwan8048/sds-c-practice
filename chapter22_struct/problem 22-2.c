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
		printf("�̸� �Է�: ");
		scanf("%s", arr[i].name);
		printf("��ȭ��ȣ �Է�: ");
		scanf("%s", arr[i].phoneNum);
		printf("���� �Է�: ");
		scanf("%d", &arr[i].age);
	}
	for (i = 0; i < 3; i++)
	{
		printf("�̸� %s\n", arr[i].name);
		printf("��ȭ��ȣ %s\n", arr[i].phoneNum);
		printf("���� %d\n", arr[i].age);
	}
	return 0;

}