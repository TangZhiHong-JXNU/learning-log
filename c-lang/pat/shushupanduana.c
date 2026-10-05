#include <stdio.h>
int main()
{
int i=2;
int n;
scanf("%d",&n);
int isprime=1;
for (;i<n;i++){
    if(n%i==0){
    printf("不是素数\n");
    isprime = 0 ;
    break;}
}
if(isprime==1){printf("是素数\n");}
else{
    printf("不是素数\n");
}

    



return 0;





}