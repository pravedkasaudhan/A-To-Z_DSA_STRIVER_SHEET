Input: 5

Output:
1                 1
1 2             2 1
1 2 3         3 2 1
1 2 3 4     4 3 2 1
1 2 3 4 5 5 4 3 2 1

Solution:- 

class Solution {
    
  public:
    void printTriangle(int n) {
        // code here
        for(int i=1;i<=n;i++){
            
            for(int j=1;j<=i;j++){
                cout<<j<<" ";
            }
            for(int j=1;j<=((n-i)*2);j++){
                cout<<"  ";
            }
            for(int j=1;j<=i;j++){
                cout<<i-j+1<<" ";
            }
            cout<<"\n";
        }
    }
};