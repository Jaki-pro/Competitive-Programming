// MOST EFFICIENT DFS CODE
const ll N = 1e5;
vector<ll> graph[N+2];
void dfs(int st, int parent)
{
    for(auto c:graph[st])
    {
        if(c==parent) {continue;}
        dfs(c, st);
    }
    cout<<st<<spc;
}
int main()
{
    dfs(1, 0);
}
