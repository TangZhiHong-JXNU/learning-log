#include <stdio.h>

/* 翁恺 3.2.5：if / else 后面可以不加 {}，但只控制紧跟的那一条语句 */
/* 输入：两行，每行一个「小时 分钟」，例如 */
/*   11 20   */
/*   13 10   */
/* 再试一次：1 15 / 2 30 —— 对比两个版本的差异 */

void with_brace(int h1, int m1, int h2, int m2)
{
    int ih = h2 - h1;
    int im = m2 - m1;

    if (im < 0) {        /* 加大括号：两句都归 if 管 */
        im = 60 + im;
        ih--;
    }
    printf("[1] 有大括号 : 时间差是%d小时%d分。\n", ih, im);
}

void no_brace(int h1, int m1, int h2, int m2)
{
    int ih = h2 - h1;
    int im = m2 - m1;

    if (im < 0)
        im = 60 + im;
        ih--;            /* 缩进看着像在 if 里，其实无条件执行 */

    printf("[2] 没大括号 : 时间差是%d小时%d分。\n", ih, im);
}

int main(void)
{
    int hour1, minute1, hour2, minute2;

    scanf("%d %d", &hour1, &minute1);
    scanf("%d %d", &hour2, &minute2);

    with_brace(hour1, minute1, hour2, minute2);
    no_brace(hour1, minute1, hour2, minute2);

    return 0;
}
