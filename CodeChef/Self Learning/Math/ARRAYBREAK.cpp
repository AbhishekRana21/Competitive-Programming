#include <bits/stdc++.h>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t,n,i,o,e;
	cin>>t;
	while(t--){
	    cin>>n; i=o=e=0;
	    long *arr = new long[n];
	    while(i<n){
	        cin>>arr[i++];
	    }
		i=0;
		while(i<n){
			if(arr[i++]%2!=0){
				o+=1;
			}
			else{
			    e+=1;
			}
		}
		if(n==e || n==o){
		    cout<<0<<el;
		}
		else{
		    cout<<n-o<<el;
		}
	    
	}
	return 0;
}