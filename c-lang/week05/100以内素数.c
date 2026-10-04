#include <stdio.h>

/* 翁恺 5.2.2：打印 100 以内所有素数（嵌套循环）
   外层循环：挨个数（n 从 2 到 100）
   内层循环：判断当前这个 n 是不是素数 —— 就是上一题的代码，原封不动包进来 */
int main(void) {
    int n, i, isPrime;

    for (n = 2; n <= 100; n++) {
        isPrime = 1;                /* ★ 每轮开头必须重置：上一轮的结论不能带到这一轮 */
        for (i = 2; i < n; i++) {
            if (n % i == 0) { isPrime = 0; break; }
        }
        if (isPrime) printf("%d ", n);
    }
    printf("\n");
    return 0;
}
