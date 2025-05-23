#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	FILE* fp = fopen("text.txt", "wt");
	fputs("123456789", fp);
	fclose(fp);

	fp = fopen("text.txt", "rt");

	fseek(fp, -2, SEEK_END); // EOF로부터 2칸 왼쪽으로 파일지시자 이동
	putchar(fgetc(fp));
	fseek(fp, 2, SEEK_SET);
	putchar(fgetc(fp)); // 3 출력 후 파일지시자 1칸 이동
	fseek(fp, 2, SEEK_CUR);
	putchar(fgetc(fp));
	fclose(fp);
	return 0;
}