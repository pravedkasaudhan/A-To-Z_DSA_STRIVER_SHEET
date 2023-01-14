class Solution
{
public:
    long long factorial(long long n){
        if(n==1){
            return 1;
        }
        return n*factorial(n-1);
    }
    vector<long long> factorialNumbers(long long N)
    {
        // Write Your Code here
        vector<long long> ans;
        long long factNum=1,index=1;
        while(factNum<=N){
            ans.push_back(factNum);
            index++;
            factNum=factorial(index);
        }
        return ans;
    }
};