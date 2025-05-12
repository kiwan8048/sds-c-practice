// 이 코드는 교재의 내용을 참고하여 작성하였습니다
#include <stdio.h>
#include <math.h>

struct point
{
	int xpos;
	int ypos;
};

int main(void)
{
	struct point pos1, pos2;
	double distance;
	fputs("point1 pos: ", stdout);
	scanf_s("%d %d", &pos1.xpos, &pos1.ypos);
	fputs("point2 pos: ", stdout);
	scanf_s("%d %d", &pos2.xpos, &pos2.ypos);
	distance = sqrt((double)((pos1.xpos - pos2.xpos) * (pos1.xpos - pos2.xpos) + (pos1.ypos - pos2.ypos) * (pos1.ypos - pos2.ypos)));
	printf("두 점의 거리는 %g 입니다, \n", distance);
	return 0;
}
