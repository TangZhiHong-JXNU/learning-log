#include <stdio.h>

int main()
{
    int price=0;
    const int amount=100;
    printf("请输入金额(元)");
    scanf("%d",&price);

    int change =amount-price;

    printf("找您%d\n",change);
    return 0;

}