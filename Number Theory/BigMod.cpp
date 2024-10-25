ll power(ll base, ll po){
    ll res = 1;
    while(po>0){
        if(po&1) res = (res*base)%mod, po--;
        else base = (base*base)%mod, po/=2;
    }
    return res;
}
