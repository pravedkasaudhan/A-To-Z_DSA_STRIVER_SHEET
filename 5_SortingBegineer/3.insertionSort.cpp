class Solution
{
    public:
    void insert(int arr[], int i,int n)
    {
        //code here
        int j=i-1;
        int temp=arr[i];

        // shift until we get the right position to insert element in ascending mannner.
        while(j>=0){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
            }
            else{
                //when position got where left is smaller then curr we break;
                break;
            }
            j--;
        }
        //insert at next to the position got.
        arr[j+1]=temp;
    }
     public:
    //Function to sort the array using insertion sort algorithm.
    void insertionSort(int arr[], int n)
    {
        //code here
        
        //pick inidividual element and send them to get placed in sorted manner.
        for(int i=1;i<n;i++){
            insert(arr,i,n);
        }
    }
};