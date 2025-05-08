#include <stdio.h>

int main(void)
{
	int ch;
	while (1) // break 나올때까지 반복
	{
		ch = getchar(); // stdin으로부터 문자 하나 입력 
		if (ch == EOF) 
			break; // 반복 탈출
		putchar(ch); // ch에 저장된 문자 stdout에 출력
	}
	return 0;
}
