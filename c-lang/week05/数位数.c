/* 数位数：输入一个正整数，输出它是几位数
 *
 * 这是 5.3.2「整数分解」的前置小工具 —— 视频里那个 mask（最高位权重）
 * 就是从这里出发的。
 *
 * 编译（本项目固定参数）：
 *   gcc -std=c11 -Wall -finput-charset=UTF-8 -fexec-charset=GBK 数位数.c -o 数位数
 */

#include <stdio.h>

int main()
{
    int x;
    printf("请输入一个正整数：");
    scanf("%d", &x);

    /* ① 先留副本 —— 因为下面会把 t 切碎，原值 x 还要用来打印 */
    int t = x;

    /* ② 计数器：数砍了几次 */
    int cnt = 0;

    /* ③ do-while 而不是 while：
     *    do-while 保证「至少砍一次」，
     *    这样输入 0 时也能得到 1 位（0 本身也是一位数字）。
     */
    do {
        t = t / 10;      /* 砍掉末位：12345 -> 1234 */
        cnt++;           /* 砍一次 = 少一位，记一笔 */
    } while (t > 0);     /* 还有剩就继续砍 */

    printf("%d 是 %d 位数\n", x, cnt);

    return 0;
}
