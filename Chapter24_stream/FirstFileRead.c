// 이 코드는 교재의 내용을 참고하였습니다
#include <stdio.h>

int main(void)
{
	int ch, i;
	FILE* fp = fopen("data.txt", "rt"); // data.txt에 대한 정보를 담은 파일 구조체 생성 후 fp에 구조체 주소 저장
	if (fp == NULL)
	{
		puts("파일오픈 실패!");
		return -1; // 비정상적 종료
	}
	for (i = 0; i < 3; i++)
	{
		ch = fgetc(fp);
		printf("%c \n", ch);
	}
	fclose(fp); // 스트림 닫기
	return 0;
}
