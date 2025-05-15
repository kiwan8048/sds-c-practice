// 이 코드는 교재의 내용을 참고하였습니다
#include <stdio.h>

typedef struct point
{
	int xpos;
	int ypos;
} Point;

void OrgSymTrans(Point* ptr)
{
	ptr->xpos = (ptr->xpos) * -1; // 부호 뒤집기
	ptr->ypos = (ptr->ypos) * -1;
}

void ShowPosition(Point pos)
{
	printf("[%d, %d] \n", pos.xpos, pos.ypos);
}

int main(void)
{
	Point pos = { 7,-5 };
	OrgSymTrans(&pos); // 원점 대칭
	ShowPosition(pos);
	OrgSymTrans(&pos); // 원상 복귀
	ShowPosition(pos);
	return 9;
}
