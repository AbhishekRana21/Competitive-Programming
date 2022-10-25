#include <iostream>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t,n,i,d;
	cin>>t;
	while(t--){
	    cin>>n; d=0;
	    int *arr = new int[n];
	    for(i=0;i<n;++i){
	        cin>>arr[i];
	    }
	    for(i=n-1;i>=0;--i){
	        if(arr[i]!=0){
	            if(i>d){
	                d=i;
	            }
	        }
	    }
	    cout<<d<<el;
	}
	return 0;
}