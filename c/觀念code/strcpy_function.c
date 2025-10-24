
#include <stdio.h>
#include <string.h>
int main()
{
    const char strA[]="test";//直接宣告並初始化字串，就不用加上'\0'
    char strB[]={'n','i','g','\0'};//宣告並直接把字元放進去就需要加
    const char* strC="test";//字串裡面放指標
    char strD[10];
    strcpy(strD,strA);
    printf(strD);
    
    return 0;
}
