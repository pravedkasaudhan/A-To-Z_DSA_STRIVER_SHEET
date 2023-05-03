int firstOccurence(int arr[],int n,int x){
    int start=0,end=n-1,mid;
    int ans=-1;
    while(start<=end){
        mid=start+(end-start)/2;
        if(arr[mid]==x){
            //save the position and move to left part of the array to find that element
            ans=mid;
            end=mid-1;
        }
        else if(arr[mid]<x){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return ans;
}

int lastOccurence(int arr[],int n,int x){
    int start=0,end=n-1,mid;
    int ans=-1;
    while(start<=end){
        mid=start+(end-start)/2;
        if(arr[mid]==x){
            //save the position and move to right part of the array to find that ele
            ans=mid;
            start=mid+1;
        }
        else if(arr[mid]<x){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return ans;
}

vector<int> find(int arr[], int n , int x )
{
    // code here
    
    vector<int> result;
    result.push_back(firstOccurence(arr,n,x));
    result.push_back(lastOccurence(arr,n,x));
    
    return result;
    
}