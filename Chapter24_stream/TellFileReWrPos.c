// 이 코드는 교재의 내용을 참고하였습니다
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	long fpos;
	int i;
	FILE* fp = fopen("text.txt", "wt");
	fputs("1234-", fp);
	fclose(fp);
	fp = fopen("text.txt", "rt");
	for (i = 0; i < 4; i++)
	{
		putchar(fgetc(fp)); // 1 2...
		fpos = ftell(fp); // 1 2...
		fseek(fp, -1, SEEK_END); // 4
		putchar(fgetc(fp)); // -
		fseek(fp, fpos, SEEK_SET); // 2 3...
	}
	fclose(fp);
	return 0;
}
