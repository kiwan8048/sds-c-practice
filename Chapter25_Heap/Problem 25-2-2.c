// �� �ڵ�� ������ ������ �����Ͽ����ϴ�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num = 0, i = 0, save = 4, j;
	int* str = malloc(sizeof(int) * 5);
	while (num != -1)
	{
		printf("���� �Է�(-1 �Է� �� ����): ");
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