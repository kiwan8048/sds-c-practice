// 이 코드는 교재의 내용을 참고하였습니다
#include <stdio.h>

int main(void)
{
	FILE* fp = fopen("data.txt", "wt"); // 쓰기 스트림으로 FILE 구조체 형성하고 그 주소를 fp에 저장
	if (fp == NULL)
	{
		puts("파일 오픈 실패!");
		return -1;
	}
	fputc('A', fp);
	fputc('B', fp);
	fputc('C', fp);
	fclose(fp);
	return 0;
}
