

class Solution {
  public:
    long long reversedBits(long long X) {
        // code here
        long long binaryNumRevResult=0;
        int position=31;
        while(X!=0){
            //get the last digit of binary form of decimal number with BITWISE-AND & operator
            int digit=X&1;

            //now assume to place it starting from 1st index of 32 bit binary number 31 position
            binaryNumRevResult+=+digit*pow(2,position);

            //keep on moving the position to right.
            position--;

            //one bitwise right shift remove right most digit from binary form of a decimal number.
            X=X>>1;
        }
     
        return binaryNumRevResult;
    }
};