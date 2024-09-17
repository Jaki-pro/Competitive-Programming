void solve(int tc)
{
    ll n, m, k, a, b, cnt=0, mx=0, mn = INT_MAX, sum=0;
    cin>>n;
    vector<ll> v(n);
    cinv(v);
    for(ll i=0; i<=31; i++){
        cnt=0;
        ll on=0, off=0;
        for(ll j=0; j<n; j++){
            if(v[j]&(1<<i)) on++;
            else off++;
        }
        sum+=((1<<i)*on*off);
    }
    cout<<sum<<nl;
    // 3 2 5 4 = 28
}
