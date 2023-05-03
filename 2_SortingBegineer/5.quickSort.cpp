class Solution
{
    public:
    int partition (int arr[], int low, int high)
    {
       // Your code here
        int pivot=low;
        int count=0;
        for(int i=low+1;i<=high;i++){
            if(arr[i]<=arr[pivot]){
                count++;
            }
        }
        pivot=low+count;
        swap(arr[low],arr[pivot]);
        int i=low,j=high;
        while(i<pivot && j>pivot){
            while(arr[i]<=arr[pivot]){
                i++;
            }
            while(arr[j]>arr[pivot]){
                j--;
            }
            if(i<pivot && j>pivot){
                swap(arr[i++],arr[j--]);
            }
        }
       return pivot;
    }
    public:
    //Function to sort an array using quick sort algorithm.
    void quickSort(int arr[], int low, int high)
    {
        // code here
        if(low>=high){
            return;
        }
        int pivot=partition(arr,low,high);
        // cout<<pivot<<endl;
        quickSort(arr,low,pivot-1);
        quickSort(arr,pivot+1,high);
    }
    
    
};