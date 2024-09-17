void solve(int tc)
{
    ll n, m, k, a, b, cnt=0, mx=0, mn = INT_MAX, sum=0;
    cin>>n;
    vector<ll> v(n+1, 0);
    for(ll i=1; i<=n; i++) cin>>v[i];
    // XOR prefix property gula maintain kore..that means prefix xor kore
    //range query kora jay
    // ejonno kuno ekta pair er range query kora mane hocche
    // behind the seen sei range porjonto subarray er xor kora
    for(ll i=1; i<=n; i++) v[i]^=v[i-1];
    for(ll i=0; i<=31; i++){
        ll on=0, off=0;
        for(ll j=0; j<=n; j++){
            if((1<<i)&v[j]) on++; // check certain bit is on/off
            else off++;
        }
        sum+=((1<<i)*on*off);
    }
    cout<<sum<<nl;
    // 3 2 5 = 22
}
