// 이 코드는 교재의 내용을 참고하여 작성하였습니다
#include <stdio.h>

struct point
{
	int xpos;
	int ypos;
};

int main(void)
{
	struct point arr[3]; // 구조체 배열
	int i;
	for (i = 0; i < 3; i++)
	{
		printf("점의 좌표 입력: ");
		scanf_s("%d %d", &arr[i].xpos, &arr[i].ypos);
	}
	for (i = 0; i < 3; i++)
	{
		printf("[%d, %d] ", arr[i].xpos, arr[i].ypos);
	}
	return 0;
}
