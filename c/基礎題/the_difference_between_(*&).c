
#include <stdio.h>

int main()
{
    int count;
    count = 998;
    int * x = &count;
    //printf("%d",x);--->false
    //printf("%d",*x);--->998
    //printf("%p",x);--->0x7ffcf6283694
    

    return 0;
}
