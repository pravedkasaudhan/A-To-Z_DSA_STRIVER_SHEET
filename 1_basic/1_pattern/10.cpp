Input: 5

Output:
* 
* * 
* * * 
* * * * 
* * * * *
* * * *
* * *
* *
*

Solution :-


class Solution{
public:
    void printTriangle(int n) {
        // code here
        int col=1;
        for(int i=1;i<=n*2-1;i++){
            for(int j=1;j<=col;j++){
                cout<<"* ";
            }
            cout<<"\n";
            if(i<n){
                col++;
            }
            else{
                col--;
            }
        }
    }
};