// Priority queue
priority_queue <int, vector<int>, greater<int>> pq;

// Next permuation
ll n= 4; // n can be upto 9
ll a[n] = {1, 2, 3, 4}; 
do
{
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<' ';
    }
    cout<<"\n";
}
while (next_permutation(a, a + n));

// my_random
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
ll my_rand(ll l, ll r)
{
	return uniform_int_distribution<ll>(l, r) (rng);
}
