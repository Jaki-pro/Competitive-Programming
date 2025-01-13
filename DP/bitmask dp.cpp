// Problem: https://docs.google.com/document/d/1zuw8hBXHsiTYTH8u986fQhn8TWfpOk9BQBIRH3lo_W8/edit?tab=t.0
const ll N=21;
int dp[N+1][(1<<N)];
vector<vector<int>>v(N+1,vector<int> (N+1));
int n, m;
int f(int job, int mask) { 
    // Initial mask = (1<<n)-1 = (11111..)
    // where set bit means person in that position is 
    // available to take the current job
    if(job==n) // when all job is done then return 0;
    {
        return 0;
    }
    auto &an = dp[job][mask];
    if(~an) return an;
    an = INT_MAX;
    for(int p=0; p<n; p++) // p = Person
    {
        if(mask &(1<<p)) {
            an=min(an, v[p][job]+f(job+1, (1<<p)^mask));
        }
    }
    return an;
}
