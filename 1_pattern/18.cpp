Input: 5

Output:
E
E D
E D C
E D C B
E D C B A

Solution :-

class Solution {
  public:
    void printTriangle(int n) {
        // code here
        
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                cout<<char('A'+(n-j))<<" ";
            }
            cout<<"\n";
        }
    }
};