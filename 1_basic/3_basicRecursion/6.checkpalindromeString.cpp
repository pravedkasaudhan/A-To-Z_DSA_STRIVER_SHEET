class Solution {
public:
    bool isPalindrome(string S) {
         int left=0,right=S.length();
	  
	  while(left<right){
        //shift left until we get alpha numeric
	      if(!isalnum(S[left])){
	          left++;
	      }

          //shift right until we get alpha numeric
	     else if(!isalnum(S[right])){
	         right--;
	     }

         //now we check for no matching pair from left and right ,if found return false;
	     else if(tolower(S[left])!=tolower(S[right])){
	         return 0;
	     }
        //  move one step form right and left 
	     else{
	         left++;right--;
	     }
	  }
	
    // after successful completeion statement is palindrome 
	return 1;
    }
};