
#include <stdio.h>

int main()
{
    int n,m,l;
    scanf("%d %d %d",&n,&m,&l);
    if(n==m&&m==l){
        printf("Regular Triangle\n");
    }
    else{
        printf("Non-Regular Triangle\n");
    }

    return 0;
}
