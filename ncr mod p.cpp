//https://codeforces.com/contest/1999/problem/F
/**
        Hasbunallahu wa ni'mal-Wakil, ni'mal mawla wa ni'man-nasir
        -ALLAH is enough for us, preferably a protector and preferably our helper.
**/

#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define FIO            ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll              long long int
#define nl              "\n"
#define el              cout<<endl
#define pb(a)           push_back(a)
#define sortv(v)        sort(v.begin(), v.end())
#define rvsv(v)         reverse(v.begin(), v.end())
#define mxv(v)          *max_element(v.begin(), v.end());
#define mnv(v)          *min_element(v.begin(), v.end());
#define mod             1000000007
#define spc             " "
#define yes             cout<<"YES"<<endl
#define no              cout<<"NO"<<endl
#define F               first
#define S              second
#define line            cout<<"<"<<__LINE__<<" Passed>"<<endl;
#define coutv(v)        for(auto it:v){cout<<it<<' ';}cout<<endl;
#define cinv(v)         for(auto &it:v)cin>>it;
#define ordered_set     tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update>
#define it(x)           x<ll>:: iterator it;
///--------------Graph Moves--------------------------------------
///const int fx[] = {+1,-1,+0,+0};
///const int fy[] = {+0,+0,+1,-1};
///const int fx[] = {+0,+0,+1,-1,-1,+1,-1,+1}; ///King's move
///const int fy[] = {-1,+1,+0,+0,+1,+1,-1,-1}; ///king's Move
///const int fx[] = {-2,-2,-1,-1,+1,+1,+2,+2}; ///knight's move
///const int fy[] = {-1,+1,-2,+2,-2,+2,-1,+1}; ///knight's move
///---------------------------------------------------------------
const ll N = 2e5;
vector<ll> fact(N+3);
ll power(ll base, ll po){
    ll res = 1;
    while(po>0){
        if(po&1) res = (res*base)%mod, po--;
        else base = (base*base)%mod, po/=2;
    }
    return res;
}
ll ncr(ll n, ll r)
{
    if( r>n) return 0;
    return (((fact[n]*power(fact[r], mod-2))%mod)*power(fact[n-r], mod-2))%mod;
}
void solve(int tc)
{
    ll n, m, k, a, b, cnt=0, mx=0, mn = INT_MAX, sum=0, ans=0;
    cin>>n>>k;
    vector<ll> v(n);
    cinv(v);
    ll zero=0;
    for(auto c:v) if(c==0) zero++;
    ll one = n-zero;
    a = k/2;
    for(ll i=0; i<=a; i++)
    {
        ll d = (ncr(zero, i)*ncr(one, k))%mod;

        ans = (ans+d)%mod;
        k--;
    }
    cout<<ans<<nl;
}
int main()
{
    FIO
    fact[0]=1;
    for(ll i=1; i<=N; i++){
        fact[i] = (fact[i-1]*i)%mod;
    }
    int t=1;
    cin>>t;
    for(int i=1; i<=t; i++) solve(i);
    return 0;
}
