class Solution {
  public:
    void printNos(int N) {
        // code here
        //functional apporach
        if(N<1){
            return;
        }
        
        cout<<N<<" ";
        printNos(N-1);
    }
};