Q- set neighbour element to zero.
class Solution {
public:
    void MakeZeros(vector<vector<int> >& arr) {
        // Code here

        // we will be keepint the copy to check for zero and neighbour values
        vector<vector<int>> temp=arr;
        int row=arr.size();
        for(int i=0;i<row;i++){
            int col=arr[i].size();
            for(int j=0;j<col;j++){
                //check in copy array and update in original array
                if(temp[i][j]==0){
                    arr[i][j]=((i==0)?0:temp[i-1][j])+
                                ((i==row-1)?0:temp[i+1][j])+
                               ( (j==0)?0:temp[i][j-1])+
                               ( (j==col-1)?0:temp[i][j+1]);

                    if(i!=0 ){
                        arr[i-1][j]=0;
                    }
                    if(i!=row-1){
                        arr[i+1][j]=0;
                    }
                    if(j!=0){
                        arr[i][j-1]=0;
                    }
                    if(j!=col-1){
                        arr[i][j+1]=0;
                    }
                }
            }
        }
    }
};

Q- set the same row and col elements tp zero .
TC-O(N*M).

class Solution {
public:
    void setZeroes(vector<vector<int>>& arr) {
        // vector<vector<int>> temp=arr;
        int row=arr.size();
        int col=arr[0].size();
        int topLeft=1;
        for(int i=0;i<row;i++){
            if(arr[i][0]==0){
                topLeft=0;
            }
            for(int j=1;j<col;j++){
               if(arr[i][j]==0){
                   arr[i][0]=arr[0][j]=0;
               }
            }
        }
        for(int i=row-1;i>=0;i--){
            for(int j=col-1;j>=1;j--){
                if(arr[i][0]==0 || arr[0][j]==0){
                    arr[i][j]=0;
                }
            }
            if(topLeft==0){
                arr[i][0]=0;
            }
        }
    }
};
Console




