class Solution{
    public:
        long long pairWithMaxSum(long long arr[], long long N)
    {
        // Your code goes here
        long long maxSum=0;
       for(long long i=0;i<N-1;i++){

        //find tif next pair sum is gretaer update the max sum
           if(arr[i]+arr[i+1]>maxSum){
               maxSum=arr[i]+arr[i+1];
           }
       }
        return maxSum;
    }
};