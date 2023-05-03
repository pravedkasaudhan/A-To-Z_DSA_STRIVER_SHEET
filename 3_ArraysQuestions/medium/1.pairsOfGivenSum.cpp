class Solution{
    public:
    vector<pair<int,int>> allPairs(int A[], int B[], int N, int M, int X)
    {
       
        vector<pair<int,int>> result;
        set<int> content;
        
        //keep all the distinct element of first array in set
        for(int i=0;i<N;i++){
            content.insert(A[i]);
        }
        
        //iterate second array and find if the other required no to sum to X exixts
        // in set , if so then we simply collect the pair of their value
        for(int i=0;i<M;i++){
            int otherEle=X-B[i];
            if(content.count(otherEle)){
                pair<int,int> single=make_pair(otherEle,B[i]);
                result.push_back(single);
            }
        }
        
        //sort the vector to keep the pair in ascending order of first value in pair
        sort(result.begin(),result.end());
        return result;
    }
};