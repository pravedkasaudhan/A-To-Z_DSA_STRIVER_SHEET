Input: 4
Output:
   A
  ABA
 ABCBA
ABCDCBA

Solution :-

class Solution {
  public:
    void printTriangle(int n) {
        // code here
        
        for(int i=0;i<n;i++){
            //white space
            for(int j=0;j<n-i-1;j++){
                cout<<" ";
            }

            //first half traingle
            for(int j=0;j<=i;j++){
                cout<<char('A'+j);
            }

            //second half traingle
             for(int j=0;j<i;j++){
                cout<<char('A'+i-j-1);
            }
            cout<<"\n";
        }
    }
};