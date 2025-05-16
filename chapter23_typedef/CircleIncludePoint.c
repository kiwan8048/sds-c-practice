#include <stdio.h>

typedef struct point
{
	int xpos;
	int ypos;
} Point;

typedef struct circle
{
	Point cen;
	double rad;
} Circle;

void ShowCircleInfo(Circle c)
{
	printf("[%d, %d] \n", c.cen.xpos, c.cen.ypos); // .�� �� ���޾Ƽ� �� �� ����
	printf("radius: %g \n \n", c.rad);
}

int main(void)
{
	Circle c1 = { {1,2},3.5 };
	Circle c2 = { 2,4,3.9 };
	ShowCircleInfo(c1);
	ShowCircleInfo(c2);
}