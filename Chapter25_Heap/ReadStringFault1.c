// 이 코드는 교재의 내용을 참고햐였습니다
#include <stdio.h>

char* ReadUserName(void)
{
	char name[30];
	printf("What's your name?"); 
	gets(name);
	return name;
}

int main(void)
{
	char* name1;
	char* name2;
	name1 = ReadUserName();
	printf("name1: %s \n", name1);
	name2 = ReadUserName();
	printf("name2:%s \n", name2);
	return 0;
}
