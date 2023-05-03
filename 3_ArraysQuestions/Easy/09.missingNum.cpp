int missingNumber(int A[], int N)
{
    // Your code goes here

    // sum till n numbers.
    int Tsum=N*(N+1)/2;
    int arrSum=0;

    //cal sum of element of array.
    for(int i=0;i<N-1;i++){
        arrSum+=A[i];
    }
    //return the missing number.
    return Tsum-arrSum;
}

// we can also do the N!/(product of element of array)


<BIT MANIPULATION METHOD>

class Solution {
public:
    int missingNumber(vector<int>& nums) {
       
        //Bit manipulation
        int ans=0;
        for(int i=0;i<nums.size();i++){
            ans^=nums[i];
        }
        for(int i=0;i<=nums.size();i++){
            ans^=i;
        }
        return ans;
    }
};