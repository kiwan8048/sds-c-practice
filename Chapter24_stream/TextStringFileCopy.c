#include <stdio.h>

int main(void)
{
	FILE* src = fopen("src.txt", "rt");
	FILE* des = fopen("des.txt", "wt");
	char ch[1024];
	if (src == NULL || des == NULL)
	{
		printf("���Ͽ��� ����!");
		return -1;
	}
	while (fgets(ch, sizeof(ch), src) != NULL)
	{
		fputs(ch, des);
	}
	if (feof(src) != 0)
	{
		puts("���Ϻ��� ����!");
	}
	else
	{
		puts("���Ϻ��� ����!");
		return -1;
	}
	fclose(src);
	fclose(des);
	return 0;
}