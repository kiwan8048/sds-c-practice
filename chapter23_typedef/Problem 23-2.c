#include <stdio.h>

typedef struct point
{
	int xpos;
	int ypos;
} Point;

typedef struct rectangle
{
	Point topLeft;
	Point botRight;
} Rectangle;

void Calcul_area(Rectangle point)
{
	int area;
	area = (point.botRight.xpos - point.topLeft.xpos) * (point.botRight.ypos - point.topLeft.ypos); // 넓이 계산
	printf("넓이: %d \n", area);
}

void Print_point(Rectangle point) // 전체 좌표 출력
{
	printf("좌상단: [%d, %d] \n", point.topLeft.xpos, point.topLeft.ypos);
	printf("좌하단: [%d, %d] \n", point.topLeft.xpos, point.botRight.ypos);
	printf("우하단: [%d, %d] \n", point.botRight.xpos, point.botRight.ypos);
	printf("우상단: [%d, %d] \n", point.botRight.xpos, point.topLeft.ypos);
}

int main(void)
{
	Rectangle square = { {0,0},{100,100} };
	Calcul_area(square);
	Print_point(square);
	return 0;
}