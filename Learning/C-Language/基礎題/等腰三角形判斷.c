
#include <stdio.h>

int main()
{
    int n,m,l;
    scanf("%d %d %d",&n,&m,&l);
    
    
    if(n==m||m==l||n==l){
        printf("isosceles triangle\n");
    }

    return 0;
}
