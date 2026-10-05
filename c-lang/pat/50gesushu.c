#include <stdio.h>
int main()
{
 int x=2; int cnt=0;
 while(cnt<50){
    int isprime=1;
    int i;
    for(i=2;i<x;i++){
        if(x%i==0){
            isprime=0;
            break;
        }
    }
    if (isprime==1){
        printf("%d",x);
        cnt ++;
    }
        x++;
        printf("\n");
   



 }
 return 0;










}