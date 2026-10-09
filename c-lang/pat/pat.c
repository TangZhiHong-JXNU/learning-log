#include <stdio.h>
int main()
{int N,M;
scanf("%d %d",&N,&M);
int t;
int sum=0;
int count=0;
for(t=N;t<=M;t++){
    int isprime=1;
    int n;
    for(n=2;n<t;n++){
if(t%n==0){isprime=0;
  break;
}



    }
if(isprime==1){
    printf("%d ",t);
     count++;        
    sum += t;       
}


}


printf("%d",sum);

return 0;
}