
#include <stdio.h>
typedef long long ll;
int calc(ll L,ll R){
    
    if((L+R)%3!=0||(R/2)>L||(L/2)>R){
        return 0;
    }
    else{
        return 1;
    }
    
}
int main()
{
    ll  pile,L,R;
    scanf("%lld",&pile);
    for(ll i=0;i<pile;i++){
        scanf("%lld %lld",&L,&R);
        
        if(calc(L,R))printf("YES\n");
        else         printf("NO\n");
    }

    return 0;
}
