#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
    int arr[10]={0};
    for(int i = 0 ; i< 10 ; i++){scanf("%d",&arr[i]);}
    
    for(int k = 0 ; k < 10 ; k ++){
        for(int m = 1 ; m < 10 ; m++){
            if(arr[m-1]>arr[m]){
                int x = arr[m];
                arr[m] = arr[m-1];
                arr[m-1] = x;
            }
        }
    }
    
    for(int l = 0 ; l < 10; l ++){printf(" %d ",arr[l]);}
    return 0;
}
