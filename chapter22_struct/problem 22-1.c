#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct employee // ����ü ����
{
	char name[20];
	char ID[20];
	int salary;
};


int main(void)
{
	struct employee me;
	puts("�̸� �Է� "); scanf("%s", me.name); // �Է�
	puts("�ֹε�Ϲ�ȣ �Է� "); scanf("%s", me.ID);
	puts("�޿� �Է� "); scanf("%d", &me.salary);
	printf("�̸�: %s \n", me.name); // ���
	printf("�ֹε�Ϲ�ȣ: %s \n", me.ID);
	printf("�޿�: %d \n", me.salary);
	return 0;
}