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
