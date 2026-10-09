/* trace10.c - 两层版：前 10 步 */
#include <stdio.h>

int main(void)
{
    int i = 1, n = 9, j;
    int step = 0;
    const int LIMIT = 10;

    printf("========== 两层版 · 前 10 步 ==========\n\n");

    while (i <= n) {
        step++; printf("%2d | i = %d，进入外层循环（第 %d 行开始）\n", step, i, i);
        if (step >= LIMIT) break;

        j = 1;
        step++; printf("%2d | j = 1                     <- 每行开头先归位\n", step);
        if (step >= LIMIT) break;

        while (j <= i) {
            step++; printf("%2d | 判断 j <= i：%d <= %d 成立 -> 打印 \"%d*%d=%d\"\n",
                           step, j, i, i, j, i * j);
            if (step >= LIMIT) break;

            j++;
            step++; printf("%2d | j++  ->  j = %d\n", step, j);
            if (step >= LIMIT) break;
        }
        if (step >= LIMIT) break;

        step++; printf("%2d | 判断 j <= i：%d <= %d 不成立 -> 内层循环退出\n", step, j, i);
        if (step >= LIMIT) break;

        step++; printf("%2d | 执行 printf(\"\\n\")：换行\n", step);
        if (step >= LIMIT) break;

        i++;
        step++; printf("%2d | i++  ->  i = %d\n", step, i);
        if (step >= LIMIT) break;
    }

    printf("\n（到第 %d 步为止）\n", step);
    return 0;
}
