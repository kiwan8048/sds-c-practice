// 이 코드는 교재의 내용을 참고하였습니다

#include <stdio.h>

int main(void)
{
	char* str = "simple String"; // 포인터 저장
	printf("1. puts test ------ \n"); 
	puts(str); // stdout에 str 문자열 출력, 자동 개행
	puts("So Simple String"); // stdout에 문자열 출력, 자동 개행
	printf("2. fputs test ------ \n"); 
	fputs(str, stdout); printf("\n"); // stdout에 str 문자열 출력, 수동 개행
	fputs("So Simple String", stdout); printf("\n"); //stdout에 문자열 출력, 수동 개행
	printf("3. end of main ----\n");
	return 0;
}