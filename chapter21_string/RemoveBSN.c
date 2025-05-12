// 이 코드는 교재의 내용을 참고하였습니다
#include <stdio.h>
#include <string.h>

void RemoveBSN(char str[])
{
	int len = strlen(str);
	str[len - 1] = 0; // 널문자 앞에 저장된 개행문자를 제거
}

int main(void)
{
	char str[100];
	printf("문자열 입력: ");
	fgets(str, sizeof(str), stdin);
	printf("길이: %d 내용: %s \n", strlen(str), str);

	RemoveBSN(str);
	printf("길이 %d 내용 %s \n", strlen(str), str);
	return 0;
}
