#include <bits/stdc++.h>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout<<fixed<<setprecision(2);
	int t,d,x,y,z;
	cin>>t;
	while(t--){
	    cin>>d>>x>>y>>z;
	    if(y*d+z*(7-d)>x*7){
	        cout<<y*d+z*(7-d)<<el;
	    }
	    else{
	        cout<<x*7<<el;
	    }
	}
	return 0;
}