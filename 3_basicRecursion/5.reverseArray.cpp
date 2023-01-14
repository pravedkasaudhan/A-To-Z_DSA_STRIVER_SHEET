#include <iostream>
#include<vector>
using namespace std;


 void sortRow(int i,vector<int> &a,int size){
   
     if(i>=size-i){
         return;
     }
     swap(a[i],a[size-i-1]);
     
     sortRow(i+1,a,size);
         
 }
 
 
int main() {
	//code
	int n,size;
	vector<vector<int>> a;
	cin>>n;
	for(int i=0;i<n;i++){
	    cin>>size;
	    vector<int> row;
	    for(int j=0;j<size;j++){
	        int x;
	        cin>>x;
	        row.push_back(x);
	    }
	    a.push_back(row);
	}
	
	for(int i=0;i<n;i++){
	    int size=a[i].size();

        option 1:-  do while loop
                // cout<<size<<"\n";
                // for(int j=0;j<size/2;j++){
                //     swap(a[i][j],a[i][size-j-1]);
                // }

       option 2:- do recursion call
	            sortRow(0,a[i],size);
	}
	for(int i=0;i<n;i++){
	    int size=a[i].size();
	    for(int j=0;j<size;j++){
	       // cout<<i<<" "<<j<<" "<<a[i][j]<<" ";
	        cout<<a[i][j]<<" ";
	    }
	    cout<<"\n";
	}
	return 0;
}