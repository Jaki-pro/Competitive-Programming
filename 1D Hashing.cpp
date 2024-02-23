 #include<bits/stdc++.h>
using namespace std;
#define ll              long long int
#define mod             1000000007
const int N = 1e6;
ll Hash1[N+1];
ll BP[N+1]; // Big Power
int p = 397; // Random prime number
void solve(int tc)
{
    ll n, m, k, a, b, cnt=0, mx=0, mn = INT_MAX, sum=0;
    string s="ac"; n = s.size();
    Hash1[0] = s[0]-'a'+1;
    BP[0] = 1;
    for(int i=1; i<s.size(); i++) // Making Hashing
    {
        Hash1[i] = ((Hash1[i-1]*p)%mod + s[i]-'a'+1)%mod;
        BP[i] = (BP[i-1]*p)%mod;
    }
    m = 10;
    while(m--) // Query
    {
        int x, y; cin>>x>>y; // Subsegment
        x--, y--;
        if(x==0) cout<<Hash1[y]<<endl;
        else cout<<Hash1[y]-(Hash1[x-1]*BP[y-x+1])%mod<<endl; // Hash value of Subsegment
    }
}
int main()
{
    int t=1;
    for(int i=1; i<=t; i++) solve(i);
    return 0;
}
