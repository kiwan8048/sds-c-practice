#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[20];
	int i ,result = 0;
	puts("���ڿ� �Է�: ");
	fgets(str, sizeof(str), stdin);
	for (i = 0; i < 20; i++)
	{
		if (str[i] > 0 && str[i] < 10)
		{
			result += str[i];
		}
		else
			continue;
	}
	printf("%d",result);
	return 0;
}