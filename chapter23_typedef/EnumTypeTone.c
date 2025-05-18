#include <stdio.h>

typedef enum syllable
{
	Do = 1, Re = 2, Mi = 3, Fa = 4, Sol = 5, La = 6, Si = 7
} Syllable;

void Sound(Syllable sy)
{
	switch (sy)
	{
	case Do:
		printf("���� �Ͼ� ������ \n"); return 0;
	case Re:
		printf("���� �ձ� ���ڵ� \n"); return 0;
	case Mi:
		printf("�̴� �Ķ� �̳��� \n"); return 0;
	case Fa:
		printf("�Ĵ� ���� �Ķ��� \n"); return 0;
	case Sol:
		printf("���� ���� �ֹ�� \n"); return 0;
	case La:
		printf("��� ������� \n"); return 0;
	case Si:
		printf("�ô� ���� �ó��� \n"); return 0;
	}

}

int main(void)
{
	Syllable tone;
	for (tone = Do; tone <= Si; tone++) // ������ ������ �ĺ��ڿ� ���ڸ� �ο�
	{
		Sound(tone);
	}
	return 0;
}