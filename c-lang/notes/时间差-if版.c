#include <stdio.h>

// 翁恺 3.2.1「做判断」的课堂例子：计算两个时间的时间差
// 输入：两行，每行一个「小时 分钟」，例如
//   11 20
//   13 10
// 输出：时间差是1小时50分。
//
// 关键：分钟不够减的时候要向小时"借位"，这一步必须用 if 判断。

int main(void)
{
    int hour1, minute1;
    int hour2, minute2;

    scanf("%d %d", &hour1, &minute1);
    scanf("%d %d", &hour2, &minute2);

    int ih = hour2 - hour1;
    int im = minute2 - minute1;

    // 分钟算出来是负数，说明不够减，要向小时借 1 小时（60 分钟）
    if (im < 0) {
        im = 60 + im;
        ih--;
    }

    printf("时间差是%d小时%d分。\n", ih, im);

    return 0;
}
