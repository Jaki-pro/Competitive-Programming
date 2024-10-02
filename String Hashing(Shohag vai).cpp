// Template owner youKnowWho
#include<bits/stdc++.h>
using namespace std;
#define ll long long
string s;
const int N = 1e6 + 3;
// BigMod
int power(long long base, long long k, const int mod) {
  int ans = 1 % mod;
  base %= mod;
  if (base < 0) base += mod;
  while (k) {
    if (k & 1) ans = (long long) ans * base % mod;
    base = (long long) base * base % mod;
    k >>= 1;
  }
  return ans;
}
const int MOD1 = 127657753, MOD2 = 987654319;
const int p1 = 151, p2 = 269;
int ip1, ip2;
pair<ll, ll> pw[N], inpw[N];
// Pre calculation of Power & Inverse power
void prec() {
  pw[0] =  {1, 1};
  for (int i = 1; i < N; i++) {
    pw[i].first = 1LL * pw[i - 1].first * p1 % MOD1;
    pw[i].second = 1LL * pw[i - 1].second * p2 % MOD2;
  }
  ip1 = power(p1, MOD1 - 2, MOD1);
  ip2 = power(p2, MOD2 - 2, MOD2);
  inpw[0] =  {1, 1};
  for (int i = 1; i < N; i++) {
    inpw[i].first = 1LL * inpw[i - 1].first * ip1 % MOD1;
    inpw[i].second = 1LL * inpw[i - 1].second * ip2 % MOD2;
  }
}
// Calculating Hash value
struct Hashing {
  int n;
  string s; // 0 - indexed
  vector<pair<int, int>> hs; // 1 - indexed
  Hashing() {}
  Hashing(string _s) {
    n = _s.size();
    s = _s;
    hs.emplace_back(0, 0);
    for (int i = 0; i < n; i++) {
      pair<int, int> p;
      p.first = (hs[i].first + 1LL * pw[i].first * s[i] % MOD1) % MOD1;
      p.second = (hs[i].second + 1LL * pw[i].second * s[i] % MOD2) % MOD2;
      hs.push_back(p);
    }
  }
  pair<int, int> get_hash(int l, int r) { // 1 - indexed
    assert(1 <= l && l <= r && r <= n);
    pair<int, int> ans;
    ans.first = (hs[r].first - hs[l - 1].first + MOD1) * 1LL * inpw[l - 1].first % MOD1;
    ans.second = (hs[r].second - hs[l - 1].second + MOD2) * 1LL * inpw[l - 1].second % MOD2;
    return ans;
  }

  pair<int, int> get_hash() {
    return get_hash(1, n);
  }
};
int main(){
    prec();
    cin>>s;
    Hashing hash1(s);
    cout<<hash1.get_hash(1, 4).first<<endl;

}
// ababcdefab
