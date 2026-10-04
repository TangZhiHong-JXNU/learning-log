#include <stdio.h>
int main ()
{int rev=0;
 int digit;
 int n;
 scanf("%d",&n);

 while (n!=0){
digit=n%10;
rev=rev*10+digit;
n=n/10 ;


 }
printf("%d\n",rev) ;
return 0;

}