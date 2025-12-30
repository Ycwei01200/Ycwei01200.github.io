
#include <stdio.h>

int main()
{
    int v[4]={1,2,3,4};
    int* k,*p=&v[0];
    for(int m=0;m<4;m++){
        k = &v[0]+m;
        p = v + m;// or p = v[m];
        printf(" %d ",*k);
        printf(" %d ",*p);
    }
    

    return 0;
}
