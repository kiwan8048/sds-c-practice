#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int count = 0;
int save[100] = { 0 };

typedef struct info
{
	char name[20];
	char tell_num[20];
} Info;

void menu(void)
{
	puts("***** MENU *****");
	puts("1. Insert");
	puts("2. Delete");
	puts("3. Search");
	puts("4. Print All");
	puts("5. Exit");
	return;
}

void Insert(Info* fp[])
{
	static int i = 0;
	printf("[INSERT]\n");
	printf("Input Name: ");
	fp[count] = malloc(sizeof(Info));
	fgets(fp[count]->name, 20, stdin);
	printf("Input Tel Number: ");
	fgets(fp[count]->tell_num, 20, stdin);
	i++;
	count++;
	printf("Data Inserted\n");
	return;
}

void Delete(Info* fp[])
{
	int i, check = 0;
	char input[20];
	printf("[DELETE]\n");
	printf("Input Name: ");
	fgets(input, sizeof(input), stdin);
	for (i = 0; i < count; i++)
	{
		if (strcmp(fp[i]->name, input) == 0)
		{
			free(fp[i]);
			fp[i] = NULL;
			save[i] = 1;
			check = 1;
			printf("Data Deleted\n");
			break;
		}
	}
	if (check == 0)
	{
		printf("삭제 실패");
	}
	return;
}

void Search(Info* fp[])
{
	int i;
	char input[20];
	printf("[SEARCH]\n");
	printf("Input Name: ");
	fgets(input, 20, stdin);
	for (i = 0; i < count; i++)
	{
		if (strcmp(fp[i]->name, input) == 0)
		{
			printf("Name: %s\n", fp[i]->name);
			printf("Tel Number: %s\n", fp[i]->tell_num);
			break;
		}
	}
}

void Print_All(Info* fp[])
{
	int i;
	printf("[Print All Data]\n");
	for (i = 0; i < count; i++)
	{
		if (save[i] == 1)
		{
			continue;
		}
		printf("Name: %sTel: %s\n", fp[i]->name, fp[i]->tell_num);
	}
	return;
}

int main(void)
{
	Info* fp[100];
	Info* temp;
	int i;
	while(1)
	{
		int opt;
		menu();
		printf("Choose the item: ");
		scanf_s("%d", &opt);
		getchar();
		switch (opt)
		{
		case 1:
			Insert(fp);
			break;
		case 2:
			Delete(fp);
			break;
		case 3:
			Search(fp);
			break;
		case 4:
			Print_All(fp);
			break;
		case 5:
			return 0;
		default:
			puts("다시 입력해주세요\n");
		}
	}
	for (i = 0; i < count; i++)
	{
		if (fp[i] != NULL)
		{
			free(fp[i]);
		}
	}
	return 0;
}