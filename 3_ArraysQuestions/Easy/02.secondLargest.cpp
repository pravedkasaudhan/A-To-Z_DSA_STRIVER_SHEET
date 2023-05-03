class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    // code here
	    if(n==0 || n==1){
	        return -1;
	    }
	    int larg=INT_MIN;
	    int secLarg=INT_MIN;
	    for(int i=0;i<n;i++){
	          if(arr[i]>larg){
	        // when we find the largest element then we first update the curr larg as second larg and update new large
	            secLarg=larg;
	            larg=arr[i];
	        }
	        // else we check for if element is greater than second largest and not equal to largest
	        else if(arr[i]>secLarg && arr[i]!=larg){
	            secLarg=arr[i];
	        }
	    }
	    // this is the case when entire array is of same element
	    if(secLarg == INT_MIN || secLarg==larg){
	        return -1;
	    }
	    return secLarg;
	}
};