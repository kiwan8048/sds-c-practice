// 이 코드는 교재의 내용을 참고하였습니다
#include <stdio.h>

#define PI 3.14
#define PRODUCT(X, Y) ((X)*(Y))
#define CIRCLE_AREA(R) (PRODUCT((R), (R))*PI)

int main(voidd)
{
	double rad = 2.1;
	printf("šÝÁö¸§ŔĚ %gŔÎ żřŔÇ łĐŔĚ: %g \n", rad, CIRCLE_AREA(rad));
	return 0;
}
