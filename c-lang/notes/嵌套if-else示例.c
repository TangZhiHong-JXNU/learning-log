#include <stdio.h>

/*
 * 翁恺 3.3.1 嵌套的 if-else
 *
 * 本文件演示两件事：
 *   1) else 总是和最近的 if 匹配（缩进骗不了编译器）
 *   2) 加 {} 之后意思就变明确了
 *
 * 编译：gcc -std=c11 -Wall -finput-charset=UTF-8 -fexec-charset=GBK 嵌套if-else示例.c -o t
 * 注意：编译时会产生一条 warning（-Wparentheses），那是故意留下的，不是错误。
 */

/* 陷阱版：else 实际归属第二个 if（跟缩进看起来不一样） */
void trap(int gameover, int count)
{
    printf("  gameover=%d count=%d  ->  ", gameover, count);
    if (gameover == 0)
        if (count > 20)
            printf("A win");
    else
        printf("B win");
    printf("\n");
}

/* 加括号版：else 归属第一个 if */
void fixed(int gameover, int count)
{
    printf("  gameover=%d count=%d  ->  ", gameover, count);
    if (gameover == 0) {
        if (count > 20) {
            printf("A win");
        }
    } else {
        printf("B win");
    }
    printf("\n");
}

/* 三个数求最大值：嵌套写法 */
int max3_nest(int a, int b, int c)
{
    int max = 0;
    if (a > b) {
        if (a > c) {
            max = a;
        } else {
            max = c;
        }
    } else {
        if (b > c) {
            max = b;
        } else {
            max = c;
        }
    }
    return max;
}

/* 三个数求最大值：级联写法（3.3.2 的内容，提前放这里做对照） */
int max3_chain(int a, int b, int c)
{
    int max = 0;
    if (a > b && a > c) {
        max = a;
    } else if (b > c) {
        max = b;
    } else {
        max = c;
    }
    return max;
}

int main(void)
{
    printf("===== 演示一：else 到底跟谁 =====\n");
    printf("你以为的意思：gameover==0 且 count>20 -> A赢，否则 -> B赢\n\n");

    printf("陷阱版（缩进骗人）：\n");
    trap(0, 30);
    trap(0, 10);
    trap(1, 30);

    printf("\n加括号版：\n");
    fixed(0, 30);
    fixed(0, 10);
    fixed(1, 30);

    printf("\n对比第 2 行和最后一行，两个版本的结果正好相反。\n");

    printf("\n===== 演示二：三个数求最大值 =====\n");
    printf("   a   b   c  |  嵌套版  级联版\n");
    printf("--------------|----------------\n");
    printf("   3   7   5  |    %d        %d\n", max3_nest(3,7,5), max3_chain(3,7,5));
    printf("   7   3   5  |    %d        %d\n", max3_nest(7,3,5), max3_chain(7,3,5));
    printf("   5   5   2  |    %d        %d\n", max3_nest(5,5,2), max3_chain(5,5,2));
    printf("   1   2   3  |    %d        %d\n", max3_nest(1,2,3), max3_chain(1,2,3));

    return 0;
}
