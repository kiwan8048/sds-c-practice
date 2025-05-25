// 이 코드는 교재의 내용을 참고하였습니다
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
	printf("이름 입력: ");
	scanf("%s", name);
	printf("주민번호 입력: ");
	scanf("%s", id);
	printf("전화번호 입력: ");
	scanf("%s", call_num);
	printf("즐겨먹는 음식 입력: ");
	scanf("%s", food);
	printf("취미 입력: ");
	scanf("%s", hobby);
	fputs("#이름: ", story);
	fputs(name, story);
	fputs("\n#주민번호: ", story);
	fputs(id, story);
	fputs("\n#전화번호: ", story);
	fputs(call_num, story);
	fputs("\n#즐겨먹는 음식: ", story);
	fputs(food, story);
	fputs("\n#취미: ", story);
	fputs(hobby, story);
	fclose(story);
	return 0;
}
