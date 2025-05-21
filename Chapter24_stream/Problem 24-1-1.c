#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char name[20];
	char id[20];
	char call_num[20];
	FILE* story = fopen("mystory.txt", "wt");
	printf("이름 입력: ");
	scanf("%s", name);
	printf("주민번호 입력: ");
	scanf("%s", id);
	printf("전화번호 입력: ");
	scanf("%s", call_num);
	fputs("#이름: ", story);
	fputs(name, story);
	fputs("\n주민번호: ", story);
	fputs(id, story);
	fputs("\n전화번호: ", story);
	fputs(call_num, story);
	fclose(story);
	return 0;
}