
class Solution
{
    public:
    //Function to sort the array using bubble sort algorithm.
    void bubbleSort(int arr[], int n)
    {
        // Your code here  

        // n-1 pass to sort the n-1 elements , nthe leement will be automatically sorted
        for(int pass=1;pass<n;pass++){

            // to iterate the n-i unsorted elements are rest element after n-i will be in thier sorted places
            for(int j=0;j<n-pass;j++){

                //check for ascending order sorting
                if(arr[j]>arr[j+1]){
                    swap(arr[j],arr[j+1]);
                }
            }
        }
    }
};