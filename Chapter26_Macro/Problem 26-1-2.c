// 이 코드는 교재의 내용을 참고하였습니다
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define PI 3.1415
#define Area(rad) ((rad)*(rad)*(PI))

int main(void)
{
	double rad;
	printf("šÝÁö¸§ ŔÔˇÂ: ");
	scanf("%lf", &rad);
	printf("łĐŔĚ: %f", Area(rad));
	return 0;
}
