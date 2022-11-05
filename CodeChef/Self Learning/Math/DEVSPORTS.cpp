#include <bits/stdc++.h>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout<<fixed<<setprecision(2);
	int t,z,y,a,b,c;
	cin>>t;
	while(t--){
	    cin>>z>>y>>a>>b>>c;
	    if(z-y>=a+b+c){
	        cout<<"YES"<<el;
	    }
	    else{
	        cout<<"NO"<<el;
	    }
	}
	return 0;
}