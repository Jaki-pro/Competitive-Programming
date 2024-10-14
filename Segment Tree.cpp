const int N = 3e5 + 9;
long long a[N];
struct SegmentTree {
  long long t[4 * N];
  static const int inf = 1e9; 
  void SET(int nd) {
    int l = nd<<1,  r = l|1;
    t[nd] = max(t[l], t[r]);
  }
  long long RES(long long L, long long R) {
    return max(L, R);
  }
  void build(int nd, int b, int e) {
    if (b == e) {
      t[nd] = a[b];
      return;
    }
    int mid = (b + e) >> 1, l = nd << 1, r = l | 1;
    build(l, b, mid);
    build(r, mid + 1, e);
    SET(nd);
  }
  void update(int nd, int b, int e, int i, int x) {
    if (b > i || e < i) return;
    if (b == e && b == i) {
      t[nd] = x;
      return;
    }
    int mid = (b + e) >> 1, l = nd << 1, r = l | 1;
    update(l, b, mid, i, x);
    update(r, mid + 1, e, i, x);
    SET(nd);
  }
  long long query(int nd, int b, int e, int i, int j) {
    if (b > j || e < i) return -inf;
    if (b >= i && e <= j) return t[nd];
    int mid = (b + e) >> 1, l = nd << 1, r = l | 1;
    long long L = query(l, b, mid, i, j);
    long long R = query(r, mid + 1, e, i, j);
    return RES(L, R);
  }
} T;
