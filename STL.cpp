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
