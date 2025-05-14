#include <stdio.h>

typedef int INT; 
typedef int* PTR_INT;

int main(void)
{
	INT num1 = 120;
	PTR_INT pnum1 = &num1;
	printf("%d", *pnum1);
	return 0;
}