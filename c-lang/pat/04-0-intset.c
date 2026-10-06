#include <stdio.h>

int main(void) {
    int a;
    scanf("%d", &a);

    int i, j, k;
    for (i = a; i <= a + 3; i++) {
        int cnt= 0;                        
        for (j = a; j <= a + 3; j++) {
            for (k = a; k <= a + 3; k++) {
                if (i != j && j != k && i != k) {
                    if (cnt!=0) {
                        printf(" ");      
                        
                    }
                    cnt++;
                    printf("%d", i * 100 + j * 10 + k);
                                  
                }
            }
        }
        printf("\n");                      
    }

    return 0;
}
