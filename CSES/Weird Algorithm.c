#include <stdio.h>
#define ll long long
int main()
{
    ll input;
    scanf("%lld",&input);
    printf("%lld ",input);
    while(input!=1){
        
        if(input%2==0)input/=2;
        else          input=input*3+1;
        
        printf("%lld ",input);
        
    }
    
 
    return 0;
}
