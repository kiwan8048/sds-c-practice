#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define add(A, B, C) ((A)+(B)+(C))
#define multiply(A, B, C) ((A)*(B)*(C))


int main(void)
{
	int A, B, C;
	printf("3°³ÀÇ Á¤¼ö ÀÔ·Â: ");
	scanf("%d %d %d", &A, &B, &C);
	printf("µ¡¼À °á°ú: %d \n", add(A,B,C));
	printf("°ö¼À °á°ú: %d \n", multiply(A,B,C));
}