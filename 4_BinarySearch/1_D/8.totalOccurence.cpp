class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
		
		int firstOccurence(int arr[],int n,int x){
    int start=0,end=n-1,mid;
    int ans=-1;
    while(start<=end){
        mid=start+(end-start)/2;
        if(arr[mid]==x){
            //save the position and move to left part of the array to find that element
            ans=mid;
            end=mid-1;
        }
        else if(arr[mid]<x){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return ans;
}

int lastOccurence(int arr[],int n,int x){
    int start=0,end=n-1,mid;
    int ans=-1;
    while(start<=end){
        mid=start+(end-start)/2;
        if(arr[mid]==x){
            //save the position and move to right part of the array to find that ele
            ans=mid;
            start=mid+1;
        }
        else if(arr[mid]<x){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return ans;
}

	int count(int arr[], int n, int x) {
	    // code here
	    
	    int firstIndex=firstOccurence(arr,n,x);
	    int lastIndex=lastOccurence(arr,n,x);

        // if not present return 0 else return count of occurence.
	   return (firstIndex == -1 || lastIndex ==-1)?0:lastIndex-firstIndex+1;
	}
};