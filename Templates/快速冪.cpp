ll fastpow(ll a,ll b){
    if(b==0)return 1;
    
    ll ans = fastpow(a,b/2);
    if(b%2==0)return (ans*ans)%mod;
    return ((ans*ans)%mod*a%mod)%mod;
    
}
