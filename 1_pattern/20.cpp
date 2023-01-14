Input: 5

Output:
*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *

Solution:-
class Solution {
  public:
     void printAPart(int n){
        for(int i=1;i<=n;i++){
            cout<<"*";
        }
    }
    void printTriangle(int n) {
        // code here
      
         for(int i=1;i<=n;i++){
            printAPart(i);
            for(int j=1;j<=(2*(n-i));j++){
                cout<<" ";
            }
            printAPart(i);
            cout<<"\n";
        }
        for(int i=2;i<=n;i++){
            // for(int j=1;j<=n-i+1;j++){
            //     cout<<"*";
            // }
            printAPart(n-i+1);
            for(int j=1;j<=(2*(i-1));j++){
                cout<<" ";
            }
            printAPart(n-i+1);
            cout<<"\n";
        }
    }
};


OR 

 for(int i=0;i<2*n-1;i++){

        i<=n-1?k++:k--;

        for(int j=0;j<2*n;j++){

            if(j<=k || j>=(2*n)-k-1){

                cout << "*";

            }

            else{

                cout << " ";

            }

        }

        cout << "\n";

    }

    }