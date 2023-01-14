TC-O(A)/O(B);

#include<iostream>
using namespace std;
int main(){
    int a,b;
    int lcm,hcf;
    cout<<"enter two values\n";
    cin>>a>>b;
    for(int i=1;i<a||i<b;i++){
        if(a%i==0 &&b%i==0){
            hcf=i;
        }
    }
    lcm=a*b/hcf;

    cout << hcf<<" "<<lcm;

return 0;
}