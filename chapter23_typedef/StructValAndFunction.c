#include <stdio.h>

typedef struct point
{
	int xpos;
	int ypos;
} Point; // typedef

void ShowPosition(Point pos) // 구조체 변수를 전달받음 
{
	printf("[%d, %d] \n", pos.xpos, pos.ypos);
}

Point GetCurrentPosition(void)
{
	Point cen;
	printf("Input current pos: ");
	scanf_s("%d %d", &cen.xpos, &cen.ypos);
	return cen; // 구조체 변수를 반환
}

int main(void)
{
	Point curPos = GetCurrentPosition();
	ShowPosition(curPos);
	return 0;
}