class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        // Complete the function
        map<int,int> prefixSum;
        int sum=0;
        int len=0;
        
        for(int i=0;i<N;i++){
            sum+=A[i];
            
            //if sum is equals to K ,we cal to lenth og subarray as from satrting as if is cumulative su from starting
            if(sum==K){
                len=max(len,i+1);
            }

            //take the rest number out of K which is either ther in map
            int rest=sum-K;

            //if found then cal the length of the subarray from that point to current point
            if(prefixSum.find(rest)!=prefixSum.end()){
                len=max(len,i-prefixSum[rest]);
            }

            // add the sum in map if it is not there (this is edge case for zero present in the array)
            if(prefixSum.find(sum)==prefixSum.end()){
                prefixSum[sum]=i;
            }
        }
        
    
        return len;
    } 

};