// �� �ڵ�� ������ ������ �����Ͽ����ϴ�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void reverse(int i, char* str)
{
	int count;
	int tok_num = 1;
	char* line[100];
	int save;
	line[0] = str;
	for (count = 0; count < i; count++)
	{
		if (str[count] == ' ')
		{
			str[count] = '\0';
			line[tok_num] = &str[count+1];
			tok_num++;
		}
	}
	for (count = tok_num - 1; count >= 0; count--)
	{
		printf("%s", line[count]);
		if (count > 0) printf(" ");
	}
}

int main(void)
{
	int i;
	char* str;
	printf("���ڿ� �ִ� ���� �Է�: ");
	scanf("%d", &i);
	getchar();
	str = malloc(i+1);
	printf("���ڿ� �Է�: ");
	fgets(str, i+1, stdin);
	reverse(i, str);
	free(str);
	return 0;
}