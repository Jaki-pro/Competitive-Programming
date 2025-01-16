/**
        Hasbunallahu wa ni'mal-Wakil, ni'mal mawla wa ni'man-nasir
        -ALLAH is enough for us, preferably a protector and preferably our helper.
**/

#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define FIO             ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll              long long int
#define nl              "\n"
#define el              cout<<endl
#define pb(a)           push_back(a)
#define vll             vector<ll>
#define sortv(v)        sort(v.begin(), v.end())
#define rvsv(v)         reverse(v.begin(), v.end())
#define mxv(v)          *max_element(v.begin(), v.end());
#define mnv(v)          *min_element(v.begin(), v.end());
#define mod             1000000007
#define spc             " "
#define yes             cout<<"YES"<<endl
#define no              cout<<"NO"<<endl
#define F               first
#define S               second
#define line            cout<<"<"<<__LINE__<<" Passed>"<<endl;
#define coutv(v)        for(auto it:v){cout<<it<<' ';}cout<<endl;
#define cinv(v)         for(auto &it:v)cin>>it;
#define ordered_set     tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define ordered_multiset tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update>
#define it(x)           x<ll>:: iterator it;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
ll my_rand(ll l, ll r)
{
    return uniform_int_distribution<ll>(l, r) (rng);
}

void solve(int tc)
{
    ll n, m, k, a, b, cnt=0, mx=0, mn = INT_MAX, sum=0;
    cin>>n;
    vector<ll> v(n);
    cinv(v);
}

int main()
{
    FIO
    int t=1;
    cin>>t;
    for(int i=1; i<=t; i++) solve(i);
    return 0;
}
