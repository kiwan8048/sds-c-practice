#include <stdio.h>

int main(void)
{
	char str[7];
	int i;
	for (i = 0; i < 3; i++)
	{
		fgets(str, sizeof(str), stdin);
		printf("Read %d: %s \n", i + 1, str);
	}
	return 0;
}

// fgets 함수는 개행 문자도 입력받음