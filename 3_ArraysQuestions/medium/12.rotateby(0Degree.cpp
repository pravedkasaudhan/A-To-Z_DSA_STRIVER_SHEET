

// rotating ring wise. TC-(O^2),SC-O(1)

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int row=matrix.size();
        int col=matrix[0].size();
        int i=0;
        for(int i=0;i<row/2;i++){
            for(int j=i;j<col-1-i;j++){
                int temp=matrix[i][j];
                matrix[i][j]=matrix[row-1-j][i];
                matrix[row-1-j][i]=matrix[row-1-i][col-1-j];
                matrix[row-1-i][col-1-j]=matrix[j][col-1-i];
                matrix[j][col-1-i]=temp;
            }
        }
    }
};

//another way 
step 1- tranpose the matrix.
step 2- reverse the each row(for clockwise) and coloumn for anti-clockwise.

class Solution
{   
    public:
    //Function to rotate matrix anticlockwise by 90 degrees.
    void rotateby90(vector<vector<int> >& matrix, int n) =
    { 
        // code here 
        
        //transpose the matrix
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                int temp=matrix[i][j];
                matrix[i][j]=matrix[j][i];
                matrix[j][i]=temp;
            }
        }
        
        //reverse the every coloumn for anti-clockwise rotation
        for(int i=0;i<n;i++){
            for(int j=0;j<n/2;j++){
                int temp=matrix[j][i];
                matrix[j][i]=matrix[n-1-j][i];
                matrix[n-1-j][i]=temp;
            }
        }
    } 
};=
