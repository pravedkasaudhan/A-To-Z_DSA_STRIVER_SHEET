class Solution
{
    public:
    int select(int arr[], int i,int n)
    {
        // code here such that selectionSort() sorts arr[]
        int min=i;
        for(int index=i+1;index<n;index++){
            if(arr[index]<arr[min]){
                min=index;
            }
        }
        return min;
    }
     
    void selectionSort(int arr[], int n)
    {
       //code here
       
       for(int i=0;i<n;i++){
           int toPlace=select(arr,i,n);
           swap(arr[i],arr[toPlace]);
       }
    }
};