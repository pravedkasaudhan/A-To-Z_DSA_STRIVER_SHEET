An element of array is leader if it is greater than or equal to all the elements to its right side. The rightmost element is always a leader. 


1- simple we can take individual element and keep check for it as a leader.
TC-O(N^2) ,SC-O(1)

2-Optimal Approach
TC-O(N)  ,SC-O(1)

class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        // Code here
        
        vector<int> result;

        // we start from right most element and add it in list and mark it as max element
        result.push_back(a[n-1]);
        int max=a[n-1];
        for(int i=n-2;i>=0;i--){
            // now we iterate and keep on checking if we get the max element and update max and result vector as the element will be leader one.
            if(a[i]>=max){
                max=a[i];
                result.push_back(a[i]);
            }
        }

        //since the element added from right to left format , we reverse it to get in correct sequence as per array.
        reverse(result.begin(),result.end());
        return result;
        
    }
};

Dear Sir/Mam,
This is issue regarding the 
Order Id:- 555698654150_1 , 555698654150_2
AWB No:- SF492233167FPL

This order was delievered on 23-01-2023 . 
Order was for two tract pants but parcel does not have any pant, customer just got empty packet having poythene bags packed.
So , there is missing product in both the orders. 
Please refund me the amount in both the orders as customers is saying to complain in police and go in consumer court against me for such fraud orders.

Kindly get the refund amount transfered as soon as possible so I can return the money to customer.

Thank You
Regards,
Raj Fashion

