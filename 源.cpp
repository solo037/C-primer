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
    printf("请输入要计算π的位数：");
    scanf("%lld", &n);

    // 使用随机数选择颜色
    int color = rand() % 8;
    switch (color)
    {
    case 0:
        printf("\x1b[31m"); // 红色
        break;
    case 1:
        printf("\x1b[32m"); // 绿色
        break;
    case 2:
        printf("\x1b[33m"); // 黄色
        break;
    case 3:
        printf("\x1b[34m"); // 蓝色
        break;
    case 4:
        printf("\x1b[35m"); // 紫色
        break;
    case 5:
        printf("\x1b[36m"); // 深绿色
        break;
    case 6:
        printf("\x1b[37m"); // 白色
        break;
    case 7:
        printf("\x1b[0m");  // 默认颜色
        break;
    }

    // 使用蒙特卡洛算法计算π
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
        printf("已经计算了%lld次了哦\n", i + 1);
        end = clock();
        printf("这次计算用时%.2f秒\n", (double)(end - start) / CLOCKS_PER_SEC);
        printf("\033[%d;%dm", rand() % 2, 30 + rand() % 8);
    }
    pi = (double)inside / n * 4;
    end = clock();
    // 计算总时间并输出
    printf("计算%lld位π用时%.2f秒\n", n, (double)(end - start) / CLOCKS_PER_SEC);

    // 输出π的值
    printf("π的值约为：%.16f\n", pi);

    return 0;
}