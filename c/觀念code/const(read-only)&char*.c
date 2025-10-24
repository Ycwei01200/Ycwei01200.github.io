
#include <stdio.h>

int main()
{
    const char strA[]="test";//直接宣告並初始化字串，就不用加上'\0'
    char strB[]={'n','i','g','\0'};//宣告並直接把字元放進去就需要加
    const char* strC="test";//字串裡面放指標
    strA[0] = "B";//Read-only data type
    strC = "cost";//改成其他字串裡面放指標，但不能改裡面的值
    
    printf(strA);
    printf("\n");
    printf(strB);
    printf("\n");
    printf("%s",strC);

    return 0;
}
