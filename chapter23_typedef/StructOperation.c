// 이 코드는 교재의 내용을 참고하였습니다
#include <stdio.h>

typedef struct point
{
	int xpos;
	int ypos;
} Point;

int main(void)
{
	Point pos1 = { 1,2 };
	Point pos2;
	pos2 = pos1;
	printf("Å©±â: %d \n", sizeof(pos1));
	printf("[%d, %d] \n", pos1.xpos, pos1.ypos);
	printf("Å©±â: %d \n", sizeof(pos2));
	printf("[%d, %d] \n", pos2.xpos, pos2.ypos);
	return 0;
}
