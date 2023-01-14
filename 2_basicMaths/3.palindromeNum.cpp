class Solution
{
	public:
		string is_palindrome(int n)
		{
		    // Code here.
            //keep all the digits in a vector for SC-O(N)
		    vector<int> a;
		    while(n!=0){
		        int digit=n%10;
		        a.push_back(digit);
		        n/=10;
		    }

            //check for palindrome in array format
		    int i=0,len=a.size();
		    while(i<len/2){
		        if(a[i]!=a[len-1-i]){
		            return "No";
		        }
		        i++;
		    }
		    return "Yes";
		    
		}
};



OR 
class Solution {
public:
    bool isPalindrome(int x) {
        int i;
        if(x<0){
            return false;
        }
        else{
            //find reverse and check palindrome
           int a=x,m;
            long rev=0;
            while(x!=0){
                m=x%10;
                if(rev*10<0){
                    return false;
                }
                rev=rev*10+m;
                x/=10;
            }
            if(rev==a){
                return true;
            }
            else{
                return false;
            }
        }
    }
};