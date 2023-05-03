class Solution{
public:

	void rearrange(int arr[], int n) {
	    // code here
	    
	    vector<int> pos,neg;

        //create two vectors for +ve and -ve elements
	    for(int i=0;i<n;i++){
	        if(arr[i]<0){
	            neg.push_back(arr[i]);
	        }
	        else{
	            pos.push_back(arr[i]);
	        }
	    }
	    int n1=pos.size();
	    int n2=neg.size();
	    int i=0,j=0;
	    int index=0;

        //update the array with alternate +ve and -ve element
	    while(i<n1 && j<n2){
	        arr[index++]=pos[i++];
	        arr[index++]=neg[j++];
	    }
	    while(i<n1){
	        arr[index++]=pos[i++];
	    }
	    while(j<n2){
	        arr[index++]=neg[j++];
	    }
	}
};