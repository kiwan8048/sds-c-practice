#include <stdio.h>

int main(void)
{
	FILE* fp = fopen("simple.txt", "wt");
	if (fp == NULL)
	{
		puts("���� ���� ����!");
		return -1;
	}
	fputc('A', fp);
	fputc('B', fp);
	fputs("MY name is Hong \n", fp);
	fputs("Your name is yoon \n", fp);
	return 0;
}