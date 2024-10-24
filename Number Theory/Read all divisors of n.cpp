// Time complexity is the same as the number of divisors of n
void brute(vector<pair<int, int>> &pf, int in, int cur){
    // pf is the info of number n
    // where first number is the prime and second is the occurance
    // in is the index of prive divisor of n
    cn++;
    if(in==pf.size()){

        cout<<cur<<' '; // cur is a divisor of the number
        return;
    }
    brute(pf, in+1, cur);
    for(int i=1; i<=pf[in].S; i++){
        cur*=pf[in].F;
        brute(pf, in+1, cur);
    }
}
