void solve(int tc)
{
    ll n, m, k, a, b, cnt=0, mx=0, mn = INT_MAX, sum=0;
    n=4;
    vector<ll> v = {1, 2, 3, 4}, subSet;
    ll total = (1<<n);
    for(ll i=0; i<total; i++){
        for(ll j=0; j<n; j++){
            if(i&(1<<j)) subSet.push_back(v[j]);
        }
        cout<<"{ ";
        for(auto c:subSet) cout<<c<<' ';
        cout<<"}"<<nl;
        subSet.clear();
    }
}
