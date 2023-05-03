1. Create sub array with nexted loop to find the max sub __ARRAY_OPERATORS

TC-O(N^2) ,SC-O(1)

2. Linear traversal - kadans algorithm

class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        
        // Your code here
        int sum=0;
        int maxSub=arr[0];
        
        for(int i=0;i<n;i++){

            //when sum goes to -ve then it wont contribute to get max sub array so we bring sum back to zero
            if(sum<0){
                sum=0;
            }
            sum+=arr[i];

            //finf the max sub array sum  obtained in eax iteration
            maxSub=max(maxSub,sum);
        }
        
        return maxSub;
    }
};