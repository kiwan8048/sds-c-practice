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
	printf("���� ���� �Է�\n");
	for (i = 0; i < 3; i++)
	{
		printf("����: ");
		fgets(input[i]->author, sizeof(input[i]->author), stdin);
		printf("����: ");
		fgets(input[i]->title, sizeof(input[i]->title), stdin);
		printf("������ ��: ");
		scanf("%d", &input[i]->page);
		getchar();
	}
	printf("\n���� ���� ���\n");
	for (i = 0; i < 3; i++)
	{
		printf("\nbook %d\n", i + 1);
		printf("����: %s", input[i]->author);
		printf("����: %s", input[i]->title);
		printf("������ ��: %d", input[i]->page);
	}
	for (i = 0; i < 3; i++)
	{
		free(input[i]);
	}
	return 0;
}