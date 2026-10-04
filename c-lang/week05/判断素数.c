#include <stdio.h>

/* 翁恺 5.2.1：判断一个数是不是素数
   思路：先默认"它是素数"，再拿 2..n-1 一个个试除；
        除得尽 → 找到因子 → 推翻假设（这就是"默认 + 证伪"） */
int main(void) {
    int n;
    scanf("%d", &n);

    if (n < 2) {                    /* 0 和 1 都不是素数，开头单独挡掉 */
        printf("不是素数\n");
        return 0;
    }

    int isPrime = 1;                /* flag 变量：先假设"是素数" */
    int i;
    for (i = 2; i < n; i++) {
        if (n % i == 0) {           /* 除得尽 → i 是 n 的因子 */
            isPrime = 0;            /* 第一步：把结论记下来 */
            break;                  /* 第二步：再跳出循环（顺序不能反） */
        }
    }

    if (isPrime) printf("是素数\n");
    else         printf("不是素数\n");
    return 0;
}
