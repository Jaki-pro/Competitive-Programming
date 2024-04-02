#include<bits/stdc++.h>
using namespace std;
#define FIO            ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll              long long int

const ll N = 1e5+5;
vector<ll> v(N+5);
vector<ll> Tree(4*N+2);
void buildTree(ll node, int starts, int ends)
{
    if(starts==ends)
    {
        Tree[node]=v[starts];
        return;
    }
    int left = node*2;
    int right = node*2+1;
    int mid = (starts+ends)/2;
    buildTree(left, starts, mid);
    buildTree(right, mid+1, ends);
    Tree[node]=Tree[left]+Tree[right];
}
ll querry(ll node, int starts, int ends, int i, int j)
{
    if(i>ends || j<starts) return 0;
    else if(starts>=i && ends<=j) return Tree[node];
    int left = 2*node;
    int right = 2*node+1;
    int mid = (starts+ends)/2;
    ll a= querry(left, starts, mid, i, j);
    ll b= querry(right, mid+1, ends, i, j);
    return a+b;
}
void update(ll node, int starts, int ends, int i, int value)
{
    if(i>ends || i<starts) return;
    else if(starts==i && i==ends) {Tree[node]=value; return;}
    int left = 2*node;
    int right = 2*node+1;
    int mid = (starts+ends)/2;
    update(left, starts, mid, i, value);
    update(right, mid+1, ends, i, value);
    Tree[node]=Tree[left]+Tree[right];
}

void solve(int tc)
{
    ll n, m, k, a, b, cnt=0, sum=0;
    cin>>n>>m;
    for(int i=1; i<=n; i++) cin>>v[i];
    buildTree(1, 1, n);
    cout<<"Case "<<tc<<":\n";
    while(m--)
    {
        //yes;
        int x, y;
        cin>>a>>x>>y;
        if(a==2)
            cout<<querry(1, 1, n, x, y)<<endl;
        else update(1, 1, n, x, y);
    }
}
int main()
{
    //FIO
    int t=1;
    cin>>t;
    for(int i=1; i<=t; i++) solve(i);
    return 0;
}
