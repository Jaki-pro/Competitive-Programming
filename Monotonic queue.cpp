void solve(int tc)
{
    ll n, m, k=3, a, b, cnt=0, mx=0, mn = INT_MAX, sum=0;
    cin>>n;
    vector<ll> v(n+3), ans(n+3);
    for(ll i=1; i<=n; i++) cin>>v[i];
    deque<pair<ll, ll>> dq;
    for(ll i=n; i>=1; i--){
        a = v[i];
        while(1){
            if(!dq.size()) break;
            auto x = dq.back();
            if( x.F>=a) dq.pop_back();
            else break;
        }
        auto x = dq.front();
        if(dq.size() && x.S==i+k) dq.pop_front();
        dq.push_back({a, i});
        x = dq.front();
        ans[i] = x.F;
    }
    for(ll i=1; i<=n; i++) cout<<ans[i]<<spc;el;
}
// 1 2 3 4 3 2 4 1
