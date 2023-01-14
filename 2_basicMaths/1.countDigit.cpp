

class Solution{
public:
    int evenlyDivides(int N){
        //code here
        
        int num=N;
        int counter=0;
        while(N!=0){
            int digit=N%10;
            if(digit!=0 && num%digit==0){
                counter++;
            }
            N/=10;
        }
        return counter;
    }
};