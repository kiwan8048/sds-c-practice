#include <stdio.h>

int main(void)
{
	int ch;
	ch = getchar(); // stdin���κ��� ���� �Է�
	if ('A' <= ch && ch <= 'Z') // �빮������ üũ
	{
		ch += 32; // �ҹ��ڷ� ��ȯ
	}
	else if ('a' <= ch && ch <= 'z') // �ҹ������� üũ
	{
		ch -= 32; // �빮�ڷ� ��ȯ
	}
	else //����
	{
		printf("�߸� �Է��Ͽ����ϴ�");
		return 0;
	}
	putchar(ch); // stdout�� ���� ���
	return 0;
}