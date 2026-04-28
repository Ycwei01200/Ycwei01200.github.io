
#include <stdio.h>
#include <stdlib.h>
#define ll long long

int main()
{
    
    ll input,inputnum,count=1;scanf("%lld",&input);
    ll* arr = calloc(input+1,sizeof(ll));
    for(int i=1;i<input;i++){
        scanf("%lld",&inputnum);
        arr[inputnum]=1;
      
    }
    
   
    
    
    for(int i=1;i<=input;i++){
        if(arr[i]!=1)printf("%lld",i);
    }
    
    return 0;
}
