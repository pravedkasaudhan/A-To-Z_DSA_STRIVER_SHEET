

class Solution{
public:
    int remove_duplicate(int a[],int n){
        // code here

        //to maintain the position of distinct elements
        int disPos=0;
        for(int i=1;i<n;i++){
            //check if curr element is not equalt to last distinct elemnt
            if(a[i]!=a[disPos]){
                //increase the position of distinct ele
                disPos++;
                //assign the next distinct element to ditinct position index
                a[disPos]=a[i];
            }

            //else continue the loop for repeated elements
            
        }

`       // retunr the no of element (last position of distinct elemnts +1)
        return disPos+1;
    }
};