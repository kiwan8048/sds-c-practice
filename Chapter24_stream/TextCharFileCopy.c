// 이 코드는 교재의 내용을 참고하였습니다
#include <stdio.h>

int main(void)
{
	FILE* wsrc = fopen("src.txt", "wt"); // 쓰기 모드로 파일 생성
	int ch;
	fputc('A', wsrc);
	fputs("MY name is Kwon! \n", wsrc);
	fclose(wsrc);
	FILE* src = fopen("src.txt", "rt");
	FILE* des = fopen("des.txt", "wt");
	if (src == NULL || des == NULL)
	{
		printf("파일오픈 실패!");
		return -1;
	}
	while ((ch = fgetc(src)) != EOF)
	{
		fputc(ch, des);
	}
	if (feof(src) != 0)
	{
		puts("파일복사 완료!");
	}
	else
		puts("파일복사 실패!");
	fclose(src);
	fclose(des);
	return 0;
}
