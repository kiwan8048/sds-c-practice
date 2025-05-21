#include <stdio.h>

int main(void)
{
	FILE* src = fopen("src.bin", "rb");
	FILE* des = fopen("dst.bin","wb");
	char buf[20];
	int readCnt;
	if (src == NULL || des == NULL)
	{
		puts("파일오픈 실패!");
		return -1;
	}
	while (1)
	{
		readCnt = fread(buf, 1, sizeof(buf), src);
		if (readCnt < sizeof(buf))
		{
			if (feof(src) != NULL)
			{
				fwrite(buf, 1, readCnt, des);
				break;
			}
			else
				puts("파일복사 실패!");
			break;
		}
		fwrite(buf, 1, sizeof(buf), des);
	}
	fclose(src);
	fclose(des);
	return 0;
}

