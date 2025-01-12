void generatePermutation(vector<ll> &v, ll start)
{
    if(v.size()==start){
        for(auto c:v) cout<<c<<' ';
        cout<<nl;
        return;
    }
    for(ll i=start; i<v.size(); i++){
        swap(v[start], v[i]); // swap to create new permutation
        generatePermutation(v, start+1);
        swap(v[start], v[i]); // again swat to retrieve original state
    }
}
