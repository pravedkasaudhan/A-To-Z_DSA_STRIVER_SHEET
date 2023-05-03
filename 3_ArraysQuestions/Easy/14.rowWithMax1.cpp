class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	    int maxRow=0;
	    int res=-1;
	    for(int row=0;row<n;row++){
	        for(int col=0;col<m;col++){

                //as we get the 1 in any row
	            if(arr[row][col]==1){

                    //since row is sorted to first position of 1 to last index in row is the no of 1's {arr[row].size()-col}
	                if(arr[row].size()-col >maxRow){

                        //we update the max no of 1's in matrix
	                    maxRow=arr[row].size()-col;

                        //update the res as the curr row
	                    res=row;
	                }
	            }
	        }
	    }
	    return res;
	}

};