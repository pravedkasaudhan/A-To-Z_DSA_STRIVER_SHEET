- set base condition.
-send left part for sort.
-send right part for the sort.

sorting function:-
- create two dynamic array(not vectors it increases the time complexity) of 2 parts.
- now simply do the merge two arrays.

class Solution
{
    public:
    void merge(int arr[], int l,int mid, int r)
    {
      int l1=mid-l+1;
      int l2=r-mid;
    int *a1=new int[l1];
    int *a2=new int[l2];
      
    //   create two arrays of 2 parts
      int start=l;
      for(int i=0;i<l1;i++){
          a1[i]=arr[start++];
      }
      start=mid+1;
      for(int i=0;i<l2;i++){
          a2[i]=arr[start++];
      }

      //merge two arrays code
      int i=0,j=0;
       start=l;
      while(i<l1 && j<l2){
          if(a1[i]<a2[j]){
              arr[start++]=a1[i++];
              
          }
          else{
              arr[start++]=a2[j++];
          }
          
      }
      while(i<l1){
          arr[start++]=a1[i++];
      }
      while(j<l2){
          arr[start++]=a2[j++];
      }

      //free up the memory space
      delete []a1;
      delete []a2;
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
        //code here
        if(l>=r){
            return;
        }
        
        int mid=(l+r)/2;
        //send left part 
        mergeSort(arr,l,mid);
        //send the rught part
        mergeSort(arr,mid+1,r);
        //merge the 2 parts of the array.
        merge(arr,l,mid,r);
    }
};