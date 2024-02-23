#include<bits/stdc++.h>
using namespace std;
#define ll              long long int
const int N = 1e6+4;
int to[N+3][26];
int tot_nodes = 1;
int cnt_string[N+3];
int Trie(string &s) // Building trie
{
    int cur = 1;
    cnt_string[cur]++;
    for(auto c:s)
    {
        int ch = c-'a';
        if(!to[cur][ch]) to[cur][ch] = ++tot_nodes;
        cur = to[cur][ch];
        cnt_string[cur]++;
    }
    return cur;
}
int search_string(string &s)
{
    int cur = 1;
    for(auto c:s)
    {
        int ch = c-'a';
        if(!to[cur][ch]) return 0;
        cur = to[cur][ch];
    }
    return cnt_string[cur];
}
void solve(int tc)
{
    int n, m, k, a, b, cnt=0, mx=0, mn = INT_MAX, sum=0;
    cin>>n; // Dictionary length
    for(int i=0; i<n; i++)
    {
        string s;cin>>s;
        int end_node = Trie(s);
    }
    cin>>m;
    // query
    while(m--)
    {
        string prefix;
        cin>>prefix;
        cnt = search_string(prefix); // how many strings exist those have prefix
        cout<<cnt<<endl;
    }
}
int main()
{
    int t=1;
//    cin>>t;
    for(int i=1; i<=t; i++) solve(i);
    return 0;
}
