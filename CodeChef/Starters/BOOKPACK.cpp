#include <bits/stdc++.h>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout<<fixed<<setprecision(2);
	int t,x,y,z,n=0;
	cin>>t;
	while(t--){
	    cin>>x>>y>>z;
	    if(y%z==0){
	        n=y/z;
	    }
	    else{
	        n=(y/z)+1;
	    }
	    cout<<n*x<<el;
	}
	return 0;
}