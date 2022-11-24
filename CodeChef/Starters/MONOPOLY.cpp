#include <bits/stdc++.h>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout<<fixed<<setprecision(2);
	long t,r1,r2,r3;
	cin>>t;
	while(t--){
	    cin>>r1>>r2>>r3;
	    if((r1>r2+r3) || (r2>r1+r3) || (r3>r1+r2)){
	        cout<<"Yes"<<el;
	    }
	    else{
	        cout<<"No"<<el;
	    }
	}
	return 0;
}