// �� �ڵ�� ������ ������ �����Ͽ����ϴ�

#include <stdio.h>

int main(void)
{
	char* str = "simple String"; // ������ ����
	printf("1. puts test ------ \n"); 
	puts(str); // stdout�� str ���ڿ� ���, �ڵ� ����
	puts("So Simple String"); // stdout�� ���ڿ� ���, �ڵ� ����
	printf("2. fputs test ------ \n"); 
	fputs(str, stdout); printf("\n"); // stdout�� str ���ڿ� ���, ���� ����
	fputs("So Simple String", stdout); printf("\n"); //stdout�� ���ڿ� ���, ���� ����
	printf("3. end of main ----\n");
	return 0;
}