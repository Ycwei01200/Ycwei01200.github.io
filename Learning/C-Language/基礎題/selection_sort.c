#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
    int arr[10]={0};
    for(int i = 0 ; i< 10 ; i++){scanf("%d",&arr[i]);}
    
    //selection sort
    
    for(int k = 0 ; k < 10 ; k ++){
        int min=k;
        for(int m = k ; m < 10 ; m++){
            if(arr[m]<arr[min]){min=m;}
        }
        int x = arr[k];
        arr[k]=arr[min];
        arr[min]=x;
    }
    for(int l = 0 ; l < 10; l ++){printf(" %d ",arr[l]);}
    return 0;
}
