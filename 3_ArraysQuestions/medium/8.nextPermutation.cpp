class Solution{
public:
    vector<int> nextPermutation(int N, vector<int> arr){
        // code here
        int part=-1;

        // it is there in order to find the first combination from end where arr[i]<arr[i+1]
        for(int i=N-2;i>=0;i--){
            if(arr[i]<arr[i+1]){
                part=i;
                break;
            }
        }

        //suppose we dont find any this comb so it is the last possible in list , we start it to the first possible combination
        if(part==-1){
            sort(arr.begin(),arr.end());
        }

        // we find the first element from back which is greater than the element that is present at part point
        else{
            int minele=part;
            for(int i=N-1;i>part;i--){
                if(arr[i]>arr[minele]){
                    minele=i;
                    break;
                }
            }

            //swap both the elememnts
            swap(arr[part],arr[minele]);
            // and then  sort the right part of the point so that it formas the next combination.
            sort(arr.begin()+part+1,arr.end());
        }
        
        return arr;
    }
    
};