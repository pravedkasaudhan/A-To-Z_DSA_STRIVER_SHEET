
ques :- count the frequency of num from 1 to n in arr and then update the frequency of 1 to N at index  0 to n-1 in arr.

class Solution{
    public:
    //Function to count the frequency of all elements from 1 to N in the array.
    void frequencyCount(vector<int>& arr,int N, int P)
    { 
        // code here
        map<int,int> mapping;
        for(int i=0;i<arr.size();i++){
            if(mapping[arr[i]]){
                mapping[arr[i]]++;
            }
            else{
                 mapping[arr[i]]=1;
            }
        }
        for(int i=0;i<N;i++){
            arr[i]=mapping[i+1];
        }
    }
};