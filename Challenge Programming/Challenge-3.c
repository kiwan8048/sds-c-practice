#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct complex_num
{
	double a;
	double b;
} Complex_num;

int add(Complex_num *input1, Complex_num *input2)
{
	double result1= (input1->a)+(input2->a);
	double result2 = (input1->b) + (input2->b);
	printf("[���� ���] �Ǽ�: %f ���: %f\n", result1, result2);
}

int multiple(Complex_num* input1, Complex_num* input2)
{
	double result1 = (input1->a) * (input2->a)- (input1->b) * (input2->b);
	double result2 = (input1->b) * (input2->a) + (input1->a) * (input2->b);
	printf("[���� ���] �Ǽ�: %f ���: %f\n", result1, result2);
}

int main(void)
{
	Complex_num input[2];
	printf("���Ҽ� �Է�1[�Ǽ� ���]: ");
	scanf("%lf %lf", &input[0].a, &input[0].b);
	printf("���Ҽ� �Է�2[�Ǽ� ���]: ");
	scanf("%lf %lf", &input[1].a, &input[1].b);
	add(&input[0], &input[1]);
	multiple(&input[0], &input[1]);
	return 0;
}