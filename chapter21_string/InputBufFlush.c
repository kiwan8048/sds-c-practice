#include <stdio.h>

void ClearLineFromReadBuffer(void)
{
	while (getchar() != '\n'); // 입력 버퍼에서 개행 문자가 나올 때까지 문자를 읽어 버퍼를 비움
}



int main(void)
{
	char perID[7];
	char name[10];
	fputs("주민 번호 앞 6자리 입력: ", stdout);
	fgets(perID, sizeof(perID), stdin);
	ClearLineFromReadBuffer();

	fputs("이름 입력: ", stdout);
	fgets(name, sizeof(name), stdin);
	printf("주민번호 : %s\n", perID);
	printf("이름 : %s\n", name);
	return 0;
}