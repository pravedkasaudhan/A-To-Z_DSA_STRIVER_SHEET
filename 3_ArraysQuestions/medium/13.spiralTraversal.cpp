class Solution{

	public:
	int findK(vector<vector<int>> &a, int n, int m, int k)
    {
        // Your code goes here
        int ele=n*m;
        int i=0;
        int firstRow=0,firstCol=0;
        int lastRow=a.size()-1;
        int lastCol=a[0].size()-1;

        //move until we get k element
        while(i<k){

            //move first row and increase the firstRow value for next usage
            for(int j=firstCol;j<=lastCol;j++){
                i++;
                if(i==k){
                    return a[firstRow][j];
                }
            }
            firstRow++;

            // move the last col and update its value for next use
             for(int j=firstRow;j<=lastRow;j++){
                i++;
                 if(i==k){
                    return a[j][lastCol];
                }
            }
            lastCol--;

            //move the last row and update its value for next use
             for(int j=lastCol;j>=firstCol;j--){
                i++;
                 if(i==k){
                    return a[lastRow][j];
                }
            }
            lastRow--;

            //move the first col and change its value for next use
             for(int j=lastRow;j>=firstRow;j--){
                i++;
                 if(i==k){
                    return a[j][firstCol];
                }
            }
            firstCol++;
            
        }
    }

};