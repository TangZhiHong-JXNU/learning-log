#include <stdio.h>

/* 翁恺 5.2.2 结尾 try：打印前 50 个素数
   和"100 以内"的区别只有一处：边界从 n 搬到 cnt。
   为什么？因为第 50 个素数是多少我们事先不知道（其实是 229），
   没法写 n <= ???，只能靠"已经找到几个了"来决定什么时候停。 */
int main(void) {
    int n, i, isPrime;
    int cnt = 0;                    /* 计数器：已经找到几个素数了，初值必须是 0 */

    for (n = 2; cnt < 50; n++) {    /* 找够 50 个就停 —— 边界看 cnt，不看 n */
        isPrime = 1;
        for (i = 2; i < n; i++) {
            if (n % i == 0) { isPrime = 0; break; }
        }
        if (isPrime) {              /* 只有真素数才打印、才计数 */
            printf("%d ", n);
            cnt++;
        }
    }
    printf("\n");
    return 0;
}
