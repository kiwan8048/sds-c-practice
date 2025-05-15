#include <stdio.h>

typedef struct point
{
	int xpos;
	int ypos;
} Point;

void OrgSymTrans(Point* ptr)
{
	ptr->xpos = (ptr->xpos) * -1; // ��ȣ ������
	ptr->ypos = (ptr->ypos) * -1;
}

void ShowPosition(Point pos)
{
	printf("[%d, %d] \n", pos.xpos, pos.ypos);
}

int main(void)
{
	Point pos = { 7,-5 };
	OrgSymTrans(&pos); // ���� ��Ī
	ShowPosition(pos);
	OrgSymTrans(&pos); // ���� ����
	ShowPosition(pos);
	return 9;
}