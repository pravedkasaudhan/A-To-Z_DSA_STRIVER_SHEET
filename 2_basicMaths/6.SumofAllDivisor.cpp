TC-O(N^2)

class Solution
{
public:

long long SumOfOne(int num){
    int sum=0;
    for(int i=1;i<=num/2;i++){
        if(num%i==0){
            sum+=i;
        }
        
    }
    sum+=num;
    return sum;
}
    long long sumOfDivisors(int N)
    {
        // Write Your Code here
        long long sum=0;
        for(int i=1;i<=N;i++){
           sum+=SumOfOne(i);
        }
        return sum;
    }
};


TC-O(N)

class Solution
{
public:


    long long sumOfDivisors(int N)
    {
        // Write Your Code here
        long long sum=0;
        for(int i=1;i<=N;i++){
        sum+=(N/i)*i;
        }
        return sum;
    }
};
