#include <stdio.h>

int main(void)
{
	int ch;
	while (1) // break ���ö����� �ݺ�
	{
		ch = getchar(); // stdin���κ��� ���� �ϳ� �Է� 
		if (ch == EOF) 
			break; // �ݺ� Ż��
		putchar(ch); // ch�� ����� ���� stdout�� ���
	}
	return 0;
}
