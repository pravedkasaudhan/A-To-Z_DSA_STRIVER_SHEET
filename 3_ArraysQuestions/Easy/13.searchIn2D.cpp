1- simple search  tc-O(n^2)
class Solution{
public:	
	int matSearch (vector <vector <int>> &mat, int N, int M, int X)
	{
	    // your code here
	    for(int i=0;i<N;i++){
	        for(int j=0;j<M;j++){
	            if(mat[i][j]==X){
	                return 1;
	            }
	        }
	    }
	    return 0;
	}
};

2-using binary search  TC-O(log n)

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size();
        int col=matrix[0].size();
        int i=0,j=col-1;

        // start with right most element in top row
        while(i<row && j>=0){

            //move to left in matrix if element is greater
            if(matrix[i][j]>target){
                j--;
            }

            //move to bottom in matrix if element is smaller than the target
            else if(matrix[i][j]<target){
                i++;
            }
            else{
                return true;
            }
        }
        return false;
    }
};