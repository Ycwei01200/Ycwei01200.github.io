
#include <stdio.h>

int main()
{
    int N;
    scanf("%d",&N);
    int m,k;
    for(  k = 1 ; k <= N ; k++){
        for( m = 1 ; m <= k; m++){
            printf("*");
            
        }
        printf("\n");
    }

    return 0;
}
