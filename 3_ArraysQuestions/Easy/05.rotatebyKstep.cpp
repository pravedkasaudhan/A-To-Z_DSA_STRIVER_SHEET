class Solution{
	public:
	
	void reverse(int arr[],int k,int n){
	    while(k<n){
	        swap(arr[k++],arr[n--]);
	    }
	}
	void leftRotate(int arr[], int k, int n) 
	{ 
	   // Your code goes here
	   
	   k%=n;

       //first reverse the entire array
	   reverse(arr,0,n-1);
       //then reverse the first n-k aaray
	   reverse(arr,0,n-k-1);
       //then reverse the last k array.
	   reverse(arr,n-k,n-1);

       // for right k step
    //     reverse(arr,0,n-1);
	//    reverse(arr,0,k-1);
	//    reverse(arr,k,n-1);

	} 
		 

};