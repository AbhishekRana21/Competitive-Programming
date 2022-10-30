#include <bits/stdc++.h>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	long long t,n,x,v,s,avg;
	int i;
	cin>>t;
	while(t--){
	    cin>>n>>x; s=0;
	    for(i=0;i<n-1;i++){
	        cin>>v;
	        s+=v;
	    }
	    if(s>=x*n){
	        cout<<0<<el;
	    }
	    else{
	        cout<<x*n-s<<el;
	    }
	}
	return 0;
}