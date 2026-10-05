#include <stdio.h>
int main()
{
 int i;
 for(i=2;i<=100;i++){
    int isprime=1;
    int n;
    for(n=2;n<i;n++){
        if(i%n==0){
            isprime=0;
            break;
        }
    }
    if (isprime==1){
        printf("%d",i);
    }
        
        printf("\n");
   



 }
 return 0;










}