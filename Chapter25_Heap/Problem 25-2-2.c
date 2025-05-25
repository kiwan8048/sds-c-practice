// 이 코드는 교재의 내용을 참고하였습니다
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num = 0, i = 0, save = 4, j;
	int* str = malloc(sizeof(int) * 5);
	while (num != -1)
	{
		printf("정수 입력(-1 입력 시 종료): ");
		scanf("%d", &num);
		str[i++] = num;
		if (i == save)
		{
			str = realloc(str, sizeof(int) * (i + 3));
			save += 3;
		}
	}
	for (j = 0; j < i - 1; j++)
	{
		printf("%d ", str[j]);
	}
	free(str);
	return 0;
}