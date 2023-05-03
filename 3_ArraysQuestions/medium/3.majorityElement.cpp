// brute force approach is to traverse the array and count foir each of the element .
TC-O(n^2),SC[O(1)

// approach using the hashmap
TC-O(N) ,SC-O(N)

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> counter;
        int result=-1;;
        int n=nums.size();
        for(int i=0;i<n;i++){

            //when curr element is present in map increase its freq else set it to 1
            if(counter[nums[i]]){
                counter[nums[i]]++;
            }
            else{
                counter[nums[i]]=1;
            }
            cout<<counter[nums[i]]<<endl;

            // everytime check if the freq out numbers the majority numbers
            if(counter[nums[i]]>n/2){
                result=nums[i];
            }
        }
        return result;
    }
};


// Moore’s Voting Algorithm

class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
        
        // your code here
        int count=0, maj;
        for(int i=0;i<size;i++){
            int num=a[i];

            //when count =0 majority == minority elements
            if(count==0){
                maj=num;
            }
            if(num==maj){
                count++;
            }
            else{
                count--;
            }
        }

        //count the no of frequency of maj element found ,check its count>size/2
       count=0;
       
       for(int i=0;i<size;i++){
           if(a[i]==maj){
               count++;
           }
       }

       return count>size/2?maj:-1;
        
    }
};