#include <stdio.h>
int main()
{int i=1,j=1;
    while(j<10){
       printf("%d*%d=%-4d", i, j, i*j);

        j++;
        if(j==10){ printf("\n");
            i++;
            j=1;
        }
    }









return 0;
}