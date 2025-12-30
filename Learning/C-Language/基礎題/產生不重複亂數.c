#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
    srand(time(0));
    
    int arr[10]={0};
    for(int i = 0 ; i < 10 ; i++){
        arr[i] = rand() % 10 + 1;
        for(int k = 0 ; k < i ; k ++){
            while(arr[k]==arr[i]){
                arr[i] = rand() % 10 + 1;
            }
        }
        
    }
    for( int  i = 0 ; i < 10 ; i++){
        printf(" %d ",arr[i]);
    }

    return 0;
}
