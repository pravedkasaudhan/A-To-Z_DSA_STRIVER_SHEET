Input: 5

Output:

    *
   ***  
  *****
 *******
*********

Solution:-

class Solution {
  public:
    void printTriangle(int n) {
        // code here
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n-i;j++){
                cout<<" ";
            }
            for(int j=1;j<=(2*i)-1;j++){
                cout<<"*";
            }
            // for(int j=1;j<=n-i;j++){
            //     cout<<" ";
            // }
            cout<<"\n";
            
        }
        
    }
};