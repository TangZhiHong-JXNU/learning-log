#include <stdio.h>
int main()
{int number;
scanf("%d",&number);
int ret=0,digit;
while(number>0){
digit=number%10;
ret=ret*10+digit;
number=number/10;


}
printf("%d",ret);
return 0;


}