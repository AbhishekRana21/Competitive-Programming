#include <bits/stdc++.h>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout<<fixed<<setprecision(2);
	long t,h,x,y,c;
	cin>>t;
	while(t--){
	    cin>>h>>x>>y>>c;
	    if(h*(x+y/2)<=c){
	        cout<<"YES"<<el;
	    }
	    else{
	        cout<<"NO"<<el;
	    }
	}
	return 0;
}