#include <stdio.h>

typedef struct point
{
	int xpos;
	int ypos;
} Point; // typedef

void ShowPosition(Point pos) // ����ü ������ ���޹��� 
{
	printf("[%d, %d] \n", pos.xpos, pos.ypos);
}

Point GetCurrentPosition(void)
{
	Point cen;
	printf("Input current pos: ");
	scanf_s("%d %d", &cen.xpos, &cen.ypos);
	return cen; // ����ü ������ ��ȯ
}

int main(void)
{
	Point curPos = GetCurrentPosition();
	ShowPosition(curPos);
	return 0;
}