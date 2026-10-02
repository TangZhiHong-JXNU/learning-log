#include <stdio.h>

/* 翁恺 3.2.4 求两个数的最大值：四种写法放一起对比 */
/* 输入：一行两个整数，例如  5 5  */
/* 重点看 a == b 那一列，哪几种写法会掉进初始值 0 */

int v1(int a, int b)   /* ① 有 else：最稳妥 */
{
    int max = 0;
    if (a > b) { max = a; } else { max = b; }
    return max;
}

int v2(int a, int b)   /* ② 先假设 b 最大：翁恺说这版更巧妙 */
{
    int max = b;
    if (a > b) { max = a; }
    return max;
}

int v3(int a, int b)   /* ③ 两个独立 if，没有 else：a == b 时漏了 */
{
    int max = 0;
    if (a > b) { max = a; }
    if (a < b) { max = b; }
    return max;
}

int v4(int a, int b)   /* ④ 只写一个 if：a <= b 时全错 */
{
    int max = 0;
    if (a > b) { max = a; }
    return max;
}

int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);

    printf("a = %d, b = %d\n", a, b);
    printf("  ① 有 else         : max = %d\n", v1(a, b));
    printf("  ② 先假设 b 最大   : max = %d\n", v2(a, b));
    printf("  ③ 两个独立 if     : max = %d\n", v3(a, b));
    printf("  ④ 只写一个 if     : max = %d\n", v4(a, b));

    return 0;
}
