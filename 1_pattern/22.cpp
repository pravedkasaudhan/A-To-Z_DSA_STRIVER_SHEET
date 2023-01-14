Input: 4

Output:
4 4 4 4 4 4 4
4 3 3 3 3 3 4
4 3 2 2 2 3 4
4 3 2 1 2 3 4
4 3 2 2 2 3 4
4 3 3 3 3 3 4
4 4 4 4 4 4 4


Solution :- 

class Solution {
  public:
    void printSquare(int n) {
        // code here
       for(int i=1;i<=2*n-1;i++){
           for(int j=1;j<=2*n-1;j++){
               cout<<max(abs(i-n),abs(j-n))+1<<" ";
           }
           cout<<"\n";
       }
    }
};