class Solution
{
    public:
    //Function to return list containing first n fibonacci numbers.
    vector<long long> printFibb(int n) 
    {
        //code here
        vector<long long> ans;
        long long a=1,b=1,c;
        // ans.push_back(a);
        // ans.push_back(b);
        while(n>0){
             ans.push_back(a);
             c=a+b;
             a=b;
             b=c;
             n--;
        }
        return ans;
    }
};

OR

class Solution {
public:
    int fib(int n) {
        if(n==0){
            return 0;
        }
        if(n==1){
            return 1;
        }
        return fib(n-1)+fib(n-2);
    }
};