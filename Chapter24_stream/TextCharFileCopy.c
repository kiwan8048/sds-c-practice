#include <stdio.h>

int main(void)
{
	FILE* wsrc = fopen("src.txt", "wt"); // ���� ���� ���� ����
	int ch;
	fputc('A', wsrc);
	fputs("MY name is Kwon! \n", wsrc);
	fclose(wsrc);
	FILE* src = fopen("src.txt", "rt");
	FILE* des = fopen("des.txt", "wt");
	if (src == NULL || des == NULL)
	{
		printf("���Ͽ��� ����!");
		return -1;
	}
	while ((ch = fgetc(src)) != EOF)
	{
		fputc(ch, des);
	}
	if (feof(src) != 0)
	{
		puts("���Ϻ��� �Ϸ�!");
	}
	else
		puts("���Ϻ��� ����!");
	fclose(src);
	fclose(des);
	return 0;
}