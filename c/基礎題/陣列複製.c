
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int plus(int* n){
    *n = *n + 1;
    return *n;
}
//*n是代表從n這個記憶體位置取出值
int main()
{
    srand(time(0));
    
    int arr[10]={0},n=-1;
    int arr1[10]={0};
    for(int  i = 0 ; i < 10 ; i ++){
        arr[i]= rand() % 10;
        
    }
    
    for(int  l = 0 ; l < 10 ; l ++){
        arr1[plus(&n)]=arr[l];
    }
    //&n是代表從這個值取出位置
    for(int   m = 0 ; m < 10 ; m ++){
        printf(" %d ",arr[m]);
    }
    printf("\n");
    for(int   m = 0 ; m < 10 ; m ++){
        printf(" %d ",arr1[m]);
    }

    return 0;
}
