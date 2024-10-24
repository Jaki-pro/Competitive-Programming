const ll N = 2e6;
vector<int> spf(N+2, 0), prime; // Smallest Prime Factor
void sieve()
{
    for(int i=2;i<N;i++){
        if(spf[i]==0) spf[i]=i,prime.push_back(i);
        int sz=prime.size();
        for(int j=0;j<sz&&i*prime[j]<N&&prime[j]<=spf[i];j++) spf[i*prime[j]]=prime[j];
    }
}
