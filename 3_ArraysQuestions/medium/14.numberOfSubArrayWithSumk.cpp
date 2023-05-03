class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
         map<int,int> mpp;
         int N=nums.size();
        int preSum=0;
        int count=0;

        //we generally set the 0 to 1 in order to get the first subarray count in counter as it is required when first time prefix Sum comes to K.so x-k=0
        mpp[0]=1;
        
        for(int i=0;i<N;i++){
            preSum+=nums[i];
            int rest=preSum-k;
            //count the no of subarray can be formed from current position i and add the counter
            count+=mpp[rest];

            //increase the occurence of that prefixSum in mapp.
           mpp[preSum]+=1;
        }
        return count;
    }
};