#include <stdio.h>

typedef struct point
{
	int xpos;
	int ypos;
} Point;

void SwapPoint(Point* pos1, Point* pos2) // 두 구조체의 값을 스왑하는 함수
{
	int save1= pos1->xpos;
	int save2 = pos1->ypos;
	pos1->xpos = pos2->xpos;
	pos1->ypos = pos2->ypos;
	pos2->xpos = save1;
	pos2->ypos = save2;
}

int main(void)
{
	Point pos1 = { 2,4 };
	Point pos2 = { 5,7 };
	printf("pos1: [%d, %d] \n", pos1.xpos, pos1.ypos);
	printf("pos2: [%d, %d] \n", pos2.xpos, pos2.ypos);
	SwapPoint(&pos1, &pos2);
	printf("pos1: [%d, %d] \n", pos1.xpos, pos1.ypos);
	printf("pos2: [%d, %d] \n", pos2.xpos, pos2.ypos);
	return 0;
}