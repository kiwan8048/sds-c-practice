#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct book
{
	char title[20];
	char author[20];
	int page;
} Book;

int main(void)
{
	int i;
	Book* input[3];
	for (i = 0; i < 3; i++)
	{
		input[i] = malloc(sizeof(Book));
	}
	printf("도서 정보 입력\n");
	for (i = 0; i < 3; i++)
	{
		printf("저자: ");
		fgets(input[i]->author, sizeof(input[i]->author), stdin);
		printf("제목: ");
		fgets(input[i]->title, sizeof(input[i]->title), stdin);
		printf("페이지 수: ");
		scanf("%d", &input[i]->page);
		getchar();
	}
	printf("\n도서 정보 출력\n");
	for (i = 0; i < 3; i++)
	{
		printf("\nbook %d\n", i + 1);
		printf("저자: %s", input[i]->author);
		printf("제목: %s", input[i]->title);
		printf("페이지 수: %d", input[i]->page);
	}
	for (i = 0; i < 3; i++)
	{
		free(input[i]);
	}
	return 0;
}