#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char name[20];
	char id[20];
	char call_num[20];
	FILE* story = fopen("mystory.txt", "wt");
	printf("�̸� �Է�: ");
	scanf("%s", name);
	printf("�ֹι�ȣ �Է�: ");
	scanf("%s", id);
	printf("��ȭ��ȣ �Է�: ");
	scanf("%s", call_num);
	fputs("#�̸�: ", story);
	fputs(name, story);
	fputs("\n�ֹι�ȣ: ", story);
	fputs(id, story);
	fputs("\n��ȭ��ȣ: ", story);
	fputs(call_num, story);
	fclose(story);
	return 0;
}