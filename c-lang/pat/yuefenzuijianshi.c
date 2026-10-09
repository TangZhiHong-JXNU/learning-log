#include <stdio.h>
int main()
{
int a,b,t,h;
int x,y;

scanf("%d/%d", &a,&b);
x=a; y=b;
while(b!=0){
t=a%b;
a=b;
b=t;



}
h=a;


printf("%d/%d",x/h,y/h);




return 0;
}