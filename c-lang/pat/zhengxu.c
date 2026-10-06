#include <stdio.h>
int main()
{int mask=1;
int x;
scanf("%d",&x);
int t=x;
while(t>9){t/=10;
    mask*=10;

}
do{
     int digit=x/mask;
    
    printf("%d",digit);
    if(mask>9){printf(" ");}
   x=x%mask; mask/=10;
}while(mask>0);
printf("\n");
return 0;
















}