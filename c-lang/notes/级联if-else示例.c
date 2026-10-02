#include <stdio.h>

/*
 * 翁恺 3.3.2 级联的 if-else（6 分 09 秒）
 *
 * 核心：else 后面直接接 if，写成 else if，代码就排成一条直线（"级联"）。
 *      else if 只是 "else { if ... }" 的简写，不是新语法。
 *
 * 编译：gcc -std=c11 -Wall -finput-charset=UTF-8 -fexec-charset=GBK 级联if-else示例.c -o t
 */

/* ===== 演示一：分段函数
 *   f(x) = -1   (x < 0)
 *          0    (x == 0)
 *          2x   (x > 0)
 */

/* 写法 A：嵌套 —— 每层都往右缩进一格 */
int f_nest(int x)
{
    int f = 0;
    if (x < 0) {
        f = -1;
    } else {
        if (x == 0) {
            f = 0;
        } else {
            f = 2 * x;
        }
    }
    return f;
}

/* 写法 B：级联 —— else 后面直接写 if，排成一条直线 */
int f_chain(int x)
{
    int f = 0;
    if (x < 0) {
        f = -1;
    } else if (x == 0) {
        f = 0;
    } else {
        f = 2 * x;
    }
    return f;
}

/* ===== 演示二：成绩等级（级联最实用的场景）
 *   90以上 A，80以上 B，70以上 C，60以上 D，60以下 E
 */

char grade_right(int score)
{
    if (score >= 90) {
        return 'A';
    } else if (score >= 80) {
        return 'B';
    } else if (score >= 70) {
        return 'C';
    } else if (score >= 60) {
        return 'D';
    } else {
        return 'E';
    }
}

/* 反例：条件顺序写反了（从低的往高的写） */
char grade_wrong(int score)
{
    if (score >= 60) {
        return 'D';
    } else if (score >= 70) {
        return 'C';
    } else if (score >= 80) {
        return 'B';
    } else if (score >= 90) {
        return 'A';
    } else {
        return 'E';
    }
}

int main(void)
{
    int xs[5] = {-5, -1, 0, 1, 5};

    printf("===== 演示一：分段函数，两种写法结果一样 =====\n");
    printf("   x   |  嵌套版  级联版\n");
    printf("-------|----------------\n");
    for (int i = 0; i < 5; i++) {
        printf("  %3d  |    %2d       %2d\n", xs[i], f_nest(xs[i]), f_chain(xs[i]));
    }
    printf("结论：else if 就是 else { if ... } 的简便写法，逻辑完全相同。\n");

    printf("\n===== 演示二：成绩等级，条件顺序的坑 =====\n");
    printf("分数 | 从大写到小(对)  从小写到大(错)\n");
    printf("-----|-------------------------------\n");
    int ss[5] = {95, 85, 75, 65, 55};
    for (int i = 0; i < 5; i++) {
        printf(" %3d |       %c              %c\n",
               ss[i], grade_right(ss[i]), grade_wrong(ss[i]));
    }
    printf("\n注意右边一列：95 分被判成 D，85 分也是 D。\n");
    printf("原因：级联是自上而下逐条判断，命中第一条就停 —— 95 早就 >= 60 了。\n");

    return 0;
}
