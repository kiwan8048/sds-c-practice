#include <stdio.h>

typedef union ubox
{
	int mem1;
	int mem2;
	double mem3;
} UBox;

int main(void)
{
	UBox ubx; // 8����Ʈ �Ҵ�
	ubx.mem1 = 20;
	printf("%d \n", ubx.mem2); // �ڷ����� ���⿡ ���� ���
	ubx.mem3 = 7.15; // 8����Ʈ�� ���� ����
	printf("%d \n", ubx.mem1); // 4����Ʈ�� �б⿡ �̻��� �� ���
	printf("%d \n", ubx.mem2);
	printf("%g \n", ubx.mem3); // 8����Ʈ ���
	return 0;
}