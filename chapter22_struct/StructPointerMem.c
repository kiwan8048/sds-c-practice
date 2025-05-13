// 이 코드는 교재의 내용을 참고하여 작성하였습니다
#include <stdio.h>

struct point
{
	int xpos;
	int ypos;
};

struct circle
{
	double radius;
	struct point* center;
};

int main(void)
{
	struct point cen = {2, 7};
	double rad = 5.5;
	struct circle ring = { rad, &cen };
	printf("¿øÀÇ ¹ÝÁö¸§: %g \n", ring.radius);
	printf("¿øÀÇ Áß½É [%d, %d] \n", (ring.center)->xpos, (ring.center)->ypos);
	return 0;
}
