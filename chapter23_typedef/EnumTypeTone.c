// 이 코드는 교재의 내용을 참고하였습니다
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
		printf("도는 하얀 도라지 \n"); return 0;
	case Re:
		printf("레는 둥근 레코드 \n"); return 0;
	case Mi:
		printf("미는 파란 미나리 \n"); return 0;
	case Fa:
		printf("파는 예쁜 파랑새 \n"); return 0;
	case Sol:
		printf("솔은 작은 솔방울 \n"); return 0;
	case La:
		printf("라는 라디오고요 \n"); return 0;
	case Si:
		printf("시는 졸졸 시냇물 \n"); return 0;
	}

}

int main(void)
{
	Syllable tone;
	for (tone = Do; tone <= Si; tone++) // 열거형 내부의 식별자에 숫자를 부여
	{
		Sound(tone);
	}
	return 0;
}
