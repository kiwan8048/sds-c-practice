#include <stdio.h>

int main(void)
{
	char str[1024];
	FILE* story = fopen("mystory.txt", "rt");
	if (story == NULL)
	{
		printf("���Ͽ��� ����!");
		return -1;
	}
	while (fgets(str, sizeof(str), story) != NULL)
	{
		puts(str);
	}
	if (feof(story) != NULL)
	{
		printf("\n������� ����!");
	}
	else
	{
		printf("������� ����!");
	}
	fclose(story);
	return 0;
}