Input: 5

Output:
**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********

Solution :- 

class Solution {
  public:
    void printAPart(int n){
        for(int i=1;i<=n;i++){
            cout<<"*";
        }
    }
    void printTriangle(int n) {
        // code here
        for(int i=1;i<=n;i++){
            // for(int j=1;j<=n-i+1;j++){
            //     cout<<"*";
            // }
            printAPart(n-i+1);
            for(int j=1;j<=(2*(i-1));j++){
                cout<<" ";
            }
            printAPart(n-i+1);
            cout<<"\n";
        }
         for(int i=1;i<=n;i++){
            printAPart(i);
            for(int j=1;j<=(2*(n-i));j++){
                cout<<" ";
            }
            printAPart(i);
            cout<<"\n";
        }
        
    }
};