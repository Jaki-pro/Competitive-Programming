void solve()
{
    ll n, m, k, a, b, cnt=0, mx=0, mn = INT_MAX, sum=0;
    cin>>n;
    vector<ll> v(n+2), nextSmallerAt(n+2),prevSmallerAt(n+2) ;
    for(ll i=1; i<=n; i++) cin>>v[i];
    stack<ll> stk;
    v[n+1]=-1;
    nextSmallerAt[n+1] = n+1;
    stk.push(n+1);
    for(ll i=n; i>=1; i--)
    {
        while(1){
            ll x = stk.top();
            if(v[x]<v[i]){
                nextSmallerAt[i] = x;
                stk.push(i);
                break;
            }
            else {
                stk.pop();
            }
        }
    }
    for(ll i=1; i<=n; i++){
        cout<<nextSmallerAt[i]<<' ';
    }
    el;
}
// 4 2 3 5 7 4 4 6
