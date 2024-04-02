#include<bits/stdc++.h>
using namespace std;
#define FIO            ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll              long long int
const ll N = 2e5+2;
vector<ll> IN(N+2), OUT(N+2), graph[N+2], pref(N+2, 0);
int timee=0;
void dfs(int u, int par)
{
    timee++;
    IN[u] = timee; /// Entering new Node and set new Time
    for(auto c:graph[u])
    {
        if(c==par) continue;
        dfs(c, u);
    }
    OUT[u] = timee; /// Set Out Time for Exiting Node
}

void solve(int tc)
{
    ll n, m, k, q, a, b, cnt=0, mx=0, mn = INT_MAX, sum=0;
    cin>>n;
    for(int i=0; i<n-1; i++)
    {
        int u, v; cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    dfs(1, -1); /// Making euler Tour

    /// In and Out of index i
    for(int i=1; i<=n; i++) cout<<IN[i]<<' ';
    cout<<endl;
    for(int i=1; i<=n; i++) cout<<OUT[i]<<' ';
}
/*
7
1 2
2 4
2 5
1 3
3 6
3 7
*/
int main()
{
    FIO
    int t=1;
//    cin>>t;
    for(int i=1; i<=t; i++) solve(i);
    return 0;
}
