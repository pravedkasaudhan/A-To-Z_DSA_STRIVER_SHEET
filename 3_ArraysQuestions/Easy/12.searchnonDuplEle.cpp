class Solution{
public:	
	int search(int A[], int N){
	    //code
	    int res=0;

        //duplicate element will canceleach other while single will be left out
	    for(int i=0;i<N;i++){
	        res=res^A[i];
	    }
	    return res;
	}
};