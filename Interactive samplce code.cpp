//https://codeforces.com/contest/2001/problem/C
ll query(ll a, ll b)
{
    cout<<"? "<<a<<' '<<b<<nl;
    ll k; cin>>k;
    return k;
}
void solve(int tc)
{
    ll n, m, k, a, b, cnt=0, mx=0, mn = INT_MAX, sum=0;
    cin>>n;
    vector<pair<ll, ll>> vp;
    for(ll i=2; i<=n; i++)
    {
        a = 1;
        while(1){
 
            b = query(a, i);
            if(b==a) break;
            a = b;
        }
        vp.push_back({a, i});
    }
    cout<<"! ";
    for(ll i=0; i<n-1; i++) cout<<vp[i].F<<' '<<vp[i].S<<' ';el;
}
 
int main()
{ 
    int t=1;
    cin>>t;
    for(int i=1; i<=t; i++) solve(i);
    return 0;
}
