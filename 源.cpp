#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
    srand(time(0));

    long long i;
    double pi = 0.0;
    long long n;
    clock_t start, end;
    printf("������Ҫ����е�λ����");
    scanf("%lld", &n);

    // ʹ�������ѡ����ɫ
    int color = rand() % 8;
    switch (color)
    {
    case 0:
        printf("\x1b[31m"); // ��ɫ
        break;
    case 1:
        printf("\x1b[32m"); // ��ɫ
        break;
    case 2:
        printf("\x1b[33m"); // ��ɫ
        break;
    case 3:
        printf("\x1b[34m"); // ��ɫ
        break;
    case 4:
        printf("\x1b[35m"); // ��ɫ
        break;
    case 5:
        printf("\x1b[36m"); // ����ɫ
        break;
    case 6:
        printf("\x1b[37m"); // ��ɫ
        break;
    case 7:
        printf("\x1b[0m");  // Ĭ����ɫ
        break;
    }

    // ʹ�����ؿ����㷨�����
    start = clock();
    int inside = 0;
    for (i = 0; i < n; i++)
    {
        double x = (double)rand() / RAND_MAX;
        double y = (double)rand() / RAND_MAX;
        if (x * x + y * y <= 1)
        {
            inside++;
        }
        printf("�Ѿ�������%lld����Ŷ\n", i + 1);
        end = clock();
        printf("��μ�����ʱ%.2f��\n", (double)(end - start) / CLOCKS_PER_SEC);
        printf("\033[%d;%dm", rand() % 2, 30 + rand() % 8);
    }
    pi = (double)inside / n * 4;
    end = clock();
    // ������ʱ�䲢���
    printf("����%lldλ����ʱ%.2f��\n", n, (double)(end - start) / CLOCKS_PER_SEC);

    // ����е�ֵ
    printf("�е�ֵԼΪ��%.16f\n", pi);

    return 0;
}