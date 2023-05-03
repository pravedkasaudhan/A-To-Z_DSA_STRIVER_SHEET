class Solution{
  public:
    // Function to find floor of x
    // n: size of vector
    // x: element whose floor is to find
    int findFloor(vector<long long> v, long long n, long long x){
        
        // Your code here
        long long start=0,end=n-1,mid;
        int res=-1;
        while(start<=end){
            mid=start+(end-start)/2;
            if(v[mid]==x){
                return mid;
            }
            else if (v[mid]>x){
                end=mid-1;
            }
            else{

                //keep track of the element small than x
                res=mid;
                start=mid+1;
            }
        }
        return res;
        
    }
};