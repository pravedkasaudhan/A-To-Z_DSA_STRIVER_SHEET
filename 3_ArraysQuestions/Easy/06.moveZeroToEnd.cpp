class Solution {
public:
    void moveZeroes(vector<int>& nums) {
          int n= nums.size();

          //we maintain the index for non zero numbers from beginning.
	    int nonZeroIndex=0;
	    for(int i=0;i<n;i++){

            //while iterating if we get non zero then we will keep it putting in starting of array
	        if(nums[i]!=0){
	            swap(nums[nonZeroIndex++],nums[i]);
	        }
	    }
    }
};