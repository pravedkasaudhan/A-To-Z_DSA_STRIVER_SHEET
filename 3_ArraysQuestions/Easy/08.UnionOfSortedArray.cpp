class Solution{
    public:
    //arr1,arr2 : the arrays
    // n, m: size of arrays
    //Function to return a list containing the union of the two arrays. 
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        //Your code here
        //return vector with correct order of elements
        
        vector<int> res;
        
        int i=0,j=0;
        //continue when both array element are left
        while(i<n && j<m){

            //when array 1 element is smaller or equal to element in array 2.
            if(arr1[i]<=arr2[j]){

                //always check if either res vector is empty || last element in res is not equal to to curr element(to prevent duplicates), then insert new element in res.
                if(res.size()==0 || res.back()!=arr1[i]){
                    res.push_back(arr1[i]);
                }
                i++;
            }
            else if(arr1[i]>arr2[j]){
                 //always check if either res vector is empty || last element in res is not equal to to curr element (to prevent duplicates), then insert new element in res.
                 if(res.size()==0 || res.back()!=arr2[j]){
                    res.push_back(arr2[j]);
                 }
                j++;
            }
        }

        //when elemnt is array 1 are left out
        while(i<n){
            if(res.size()==0 || res.back()!=arr1[i]){
                res.push_back(arr1[i]);
            }
            i++;
        }

        //for element left out in array 2
        while(j<m){
             if(res.size()==0 || res.back()!=arr2[j]){
                res.push_back(arr2[j]);
             }
            j++;
        }
        
        return res;
    }
};