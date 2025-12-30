
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
    srand(time(0));
    int arr[10]={0},l,check;
    for(int i = 0 ; i < 9 ; i++){
        
        do{
            l = rand()%10+1;
            check=0;
            for(int k = 0; k < 10; k ++){
                if(l==arr[k]){check=1;break;}
            }
            
        }while(check==1);
        arr[i] = l;
        
    }
    for(int i = 0 ; i < 9 ; i ++ ){printf(" %d ",arr[i]);}

    return 0;
}
