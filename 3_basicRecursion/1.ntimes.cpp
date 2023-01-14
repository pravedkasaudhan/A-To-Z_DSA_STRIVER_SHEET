class Solution{
    public:
    //Complete this function
    
    void task(int index,int N){
        if(index>N){
            return;
        }
        cout<<index<<" ";
        task(index+1,N);
    }
    
    void printNos(int N)
    {
        //functional programming
        if(N<1){
            return;
        }
        printNos(N-1);
        cout<<N<<" ";
        
        // OR

        //paramterized recursion
        task(1,N);
        
    }
};