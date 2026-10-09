#include <stdio.h>
int  main()
{int i,j;
    i=1;
int n;
scanf("%d",&n);
while(i<=n){j=1;

while(j<=i){
    printf("%d*%d=%-4d",i,j,i*j);
j++;


}printf("\n"); 
i++;
}




return 0;
}