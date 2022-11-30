#include <bits/stdc++.h>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout<<fixed<<setprecision(2);
	long long t,n,i,o;
	cin>>t;
	while(t--){
	    cin>>n; i=o=0;
	    long long *arr = new long long[n];
	    while(i<n){
	        cin>>arr[i];
	        if(arr[i]%2!=0){
	            o++;
	        }
	        i++;
	    }
	    if(o%2==0 && o!=0){
	        cout<<"YES"<<el;
	    }
	    else{
	        cout<<"NO"<<el;
	    }
	}
	return 0;
}