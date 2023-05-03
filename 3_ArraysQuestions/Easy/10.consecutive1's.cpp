1:- simple , count max consecuituve (iterative approach)

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cons=0;
        int maxCons=0;
        int n=nums.size();
        for(int i=0;i<n;i++){

            //increase counter
            if(nums[i]==1){
              cons++;
            }
            // when zero comes put the counter to 0
            else{
                cons=0;
            }
            //update the the max occurence if counter outreahces it
            if(cons>maxCons){
                maxCons=cons;
            }
            cout<<i<<" "<<cons<<" "<<maxCons<<endl;
        }
        return maxCons;
    }
};

2:- count max consecutive by flipping k zeros(sliding window approach)


class Solution{
public:
    // m is maximum of number zeroes allowed to flip
    // n is size of array
    int findZeroes(int arr[], int n, int m) {
        // code here
        int start=0,end=0;
        int zeroCounter=0;
        int maxPoss=0;
        int consec=0;
        

        //start by keeping start and end at first index
        for(int i=end;i<n;i++){

            //update zer count when zero occurs
            if(arr[i]==0){
                zeroCounter++;
            }

            //move the start until zero comes within k max limits ,if it goes out of limit
            while(zeroCounter>m){
                if(arr[start]==0){
                    zeroCounter--;
                }
                start++;
            }

            //find the max out of previous iteration and curr start and end
            maxPoss=max(maxPoss,end-start+1);

            //update the end for next iteration checking
            end++;
        }
        // cout<<i <<" "<<j<<endl;
        return maxPoss;
    }  
};
