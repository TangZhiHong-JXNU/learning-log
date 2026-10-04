#include <stdio.h>

/* 翁恺 5.1.1：for 循环版阶乘
   输入 n，输出 n!（= 1 × 2 × 3 × … × n） */
int main(void) {
    int n;
    scanf("%d", &n);

    int result = 1;     /* 乘法的单位元是 1 —— 循环一次都不跑时（n=0/1），结果也对 */
    int i;              /* 计数器：从 1 一路乘到 n */

    for (i = 1; i <= n; i++) {
        result = result * i;
    }

    printf("%d\n", result);
    return 0;
}
