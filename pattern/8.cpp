Input: 5

Output:

*********
 *******
  *****
   ***
    *


Solution :- 

class Solution{
public:
	
	void printTriangle(int n) {
	    // code here
	    for(int i=1;i<=n;i++){
	        for(int j=1;j<=i-1;j++){
	            cout<<" ";
	        }
	        for(int j=1;j<=(n-i)*2+1;j++){
	            cout<<"*";
	        }
	        cout<<"\n";
	    }
	}
};