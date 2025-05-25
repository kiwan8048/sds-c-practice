// 이 코드는 교재의 내용을 참고하였습니다
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char name[10];
	char sex;
	int age;

	FILE* fp = fopen("friend.txt", "rt");
	int ret;
	while (1)
	{
		ret = fscanf(fp, "%s %c %d", name, &sex, &age);
		if (ret == EOF) // ÆÄÀÏ ³¡³¯ ¶§±îÁö ¹Ýº¹
			break;
		printf("%s %c %d", name, sex, age);
	}
	fclose(fp);
	return 0;
}
