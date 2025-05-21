#include <stdio.h>

int main(void)
{
	char str[1024];
	FILE* story = fopen("mystory.txt", "rt");
	if (story == NULL)
	{
		printf("파일오픈 실패!");
		return -1;
	}
	while (fgets(str, sizeof(str), story) != NULL)
	{
		puts(str);
	}
	if (feof(story) != NULL)
	{
		printf("\n파일출력 성공!");
	}
	else
	{
		printf("파일출력 실패!");
	}
	fclose(story);
	return 0;
}