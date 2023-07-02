ll fun(ll n){
    ll ans=1,base=2;
    while(n){
        if(n%2) ans*=base,n--;
        else base*=base,n/=2;
    }
    return ans;
}
