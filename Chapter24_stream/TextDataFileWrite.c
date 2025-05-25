// 이 코드는 교재의 내용을 참고하였습니다
#include <stdio.h>

int main(void)
{
	FILE* fp = fopen("simple.txt", "wt");
	if (fp == NULL)
	{
		puts("ÆÄÀÏ ¿ÀÇÂ ½ÇÆÐ!");
		return -1;
	}
	fputc('A', fp);
	fputc('B', fp);
	fputs("MY name is Hong \n", fp);
	fputs("Your name is yoon \n", fp);
	return 0;
}
