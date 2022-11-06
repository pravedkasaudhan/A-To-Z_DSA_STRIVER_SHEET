
class Solution {
  public:
    void printDiamond(int n) {
        // code here
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n-i;j++){
                cout<<" ";
            }
            for(int j=1;j<=i;j++){
                cout<<"* ";
            }
            cout<<"\n";
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i-1;j++){
                cout<<" ";
            }
            for(int j=1;j<=n-i+1;j++){
                cout<<"* ";
            }
            cout<<"\n";
        }
    }
};