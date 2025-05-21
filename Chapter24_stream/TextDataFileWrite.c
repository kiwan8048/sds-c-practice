#include <stdio.h>

int main(void)
{
	FILE* fp = fopen("simple.txt", "wt");
	if (fp == NULL)
	{
		puts("파일 오픈 실패!");
		return -1;
	}
	fputc('A', fp);
	fputc('B', fp);
	fputs("MY name is Hong \n", fp);
	fputs("Your name is yoon \n", fp);
	return 0;
}