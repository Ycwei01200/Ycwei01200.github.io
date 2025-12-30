
#include <stdio.h>

int main()
{
    int a=0,b=0;
    b=++a;
    printf("%d %d\n",a,b);
    a=0;b=0;
    b=a++;
    printf("%d %d",a,b);

    return 0;
}
