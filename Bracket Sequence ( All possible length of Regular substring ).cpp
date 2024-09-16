// All Possible length of Regular substring of Bracket sequence
void solve(int tc)
{
    ll n, m, k, a, b, cnt=0, ct=0, mx=0, mn = INT_MAX, sum=0;
    string s;
    cin>>s;
    n  = s.size();
    stack<ll> stk;
    vector<ll> v;
    stk.push(-1);
    map<ll, ll> mp;
    v.push_back(0);
    mp[0]++;
    for(ll i=0;i<n; i++){
        char c = s[i];
        if(c=='(') stk.push(i);
        else {

            stk.pop();
            if(stk.size()>0){
                v.push_back(i-stk.top());
                mp[i-stk.top()]++;
            }
            else stk.push(i);
        }
    }
    a = *max_element(v.begin(), v.end());
    cout<<a<<' '<<mp[a]<<nl;
}
