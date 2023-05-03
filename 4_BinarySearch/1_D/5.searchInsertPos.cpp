 By Upper bound : -

 class Solution{
    public:
    int searchInsertK(vector<int>Arr, int N, int k)
    {
        // code here
        int start=0,end=N-1,mid;
        int index=-1;
        while(start<=end){
            mid=start+(end-start)/2;
            if(Arr[mid]==k){
                return mid;
            }
            //keep track of upper bound
            else if(Arr[mid]>k){
                index=mid;
                end=mid-1;
                
            }
            else{
                start=mid+1;
            }
        }

        //check if upper bound does not exits then will be inserting at last index
        return (index==-1)?N:index;
    }
};

Same can be done by keeping track of lower bound but here insertion will be done after lower bound index