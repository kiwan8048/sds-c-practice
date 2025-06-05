#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char ch;
	int count_A = 0, count_P = 0;
	FILE* fp = fopen("C:\\Users\\a\\OneDrive\\사진\\바탕 화면\\text.txt", "rt");
	if (fp == NULL) 
	{
		printf("파일 열기 실패!\n");
		return 1;
	}
	while ((ch = fgetc(fp)) != EOF)
	{
		if (ch == 'A')
		{
			count_A++;
		}
		if (ch == 'P')
		{
			count_P++;
		}
		while (1)
		{
			ch = fgetc(fp);
			if (ch == ' ' || ch == EOF)
			{
				break;
			}
		}
	}
	printf("A로 시작하는 단어의 수: %d\n", count_A);
	printf("P로 시작하는 단어의 수: %d\n", count_P);
	return 0;
}