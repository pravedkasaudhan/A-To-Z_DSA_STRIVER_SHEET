class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // code here 
        int zero=0,one=0,two=n-1;
        while(one<=two){
            if(a[one]==0){
                swap(a[one],a[zero]);
                zero++;
                one++;
            }
            else if(a[one]==1){
                one++;
            }
            else if(a[one]==2){
                swap(a[one],a[two]);
                two--;
            }
        }
    }
    
};