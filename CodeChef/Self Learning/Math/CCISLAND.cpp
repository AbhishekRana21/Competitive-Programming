#include <bits/stdc++.h>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout<<fixed<<setprecision(2);
	long t,x,y,xr,yr,n;
	cin>>t;
	while(t--){
	    cin>>x>>y>>xr>>yr>>n;
	    if(x/xr>=n && y/yr>=n){
	        cout<<"YES"<<el;
	    }
	    else{
	        cout<<"NO"<<el;
	    }
	}
	return 0;
}