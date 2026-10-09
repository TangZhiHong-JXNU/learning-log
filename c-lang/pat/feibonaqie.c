#include <stdio.h>
int main()
{double i=2,j=1;
int n;
int t;
scanf("%d",&n);
double sum=2;
int count=0;
for(;count<n-1;count++)
{t=i+j;
j=i;
i=t;
sum+=i/j;

}

printf("%.2f\n",sum);









    return 0;
}