#include <stdio.h>

int main(void)
{
    FILE* f1, * f2;
    int c1, c2;

    f1 = fopen("d1.txt", "rb");
    f2 = fopen("d2.txt", "rb");

    if (f1 == NULL || f2 == NULL) {
        printf("���� ���� ����\n");
        return 1;
    }

    while (1) {
        c1 = fgetc(f1);
        c2 = fgetc(f2);

        if (c1 == EOF && c2 == EOF) {
            printf("����\n");
            break;
        }

        if (c1 != c2) {
            printf("�ٸ�\n");
            break;
        }
    }

    fclose(f1);
    fclose(f2);
    return 0;
}
