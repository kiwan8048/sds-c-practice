#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	FILE* fp = fopen("text.txt", "wt");
	fputs("123456789", fp);
	fclose(fp);

	fp = fopen("text.txt", "rt");

	fseek(fp, -2, SEEK_END); // EOF�κ��� 2ĭ �������� ���������� �̵�
	putchar(fgetc(fp));
	fseek(fp, 2, SEEK_SET);
	putchar(fgetc(fp)); // 3 ��� �� ���������� 1ĭ �̵�
	fseek(fp, 2, SEEK_CUR);
	putchar(fgetc(fp));
	fclose(fp);
	return 0;
}