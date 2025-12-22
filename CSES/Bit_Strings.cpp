#include <iostream>
#include <cmath>
typedef long long ll;
using namespace std;
ll mod=1000000007;
ll fastpow(ll a,ll b){
    if(b==0)return 1;
    
    ll ans = fastpow(a,b/2);
    if(b%2==0)return (ans*ans)%mod;
    return ((ans*ans)%mod*a%mod)%mod;
    
}
int main()
{
    ll p,m;
    cin>>p;
    cout<<fastpow(2,p);

    return 0;
}
