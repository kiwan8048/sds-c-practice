#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char name[20];
	char id[20];
	char call_num[20];
	char food[20];
	char hobby[20];
	FILE* story = fopen("mystory.txt", "wt");
	printf("�̸� �Է�: ");
	scanf("%s", name);
	printf("�ֹι�ȣ �Է�: ");
	scanf("%s", id);
	printf("��ȭ��ȣ �Է�: ");
	scanf("%s", call_num);
	printf("��ܸԴ� ���� �Է�: ");
	scanf("%s", food);
	printf("��� �Է�: ");
	scanf("%s", hobby);
	fputs("#�̸�: ", story);
	fputs(name, story);
	fputs("\n#�ֹι�ȣ: ", story);
	fputs(id, story);
	fputs("\n#��ȭ��ȣ: ", story);
	fputs(call_num, story);
	fputs("\n#��ܸԴ� ����: ", story);
	fputs(food, story);
	fputs("\n#���: ", story);
	fputs(hobby, story);
	fclose(story);
	return 0;
}