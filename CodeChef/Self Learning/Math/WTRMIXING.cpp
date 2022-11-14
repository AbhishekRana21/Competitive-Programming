#include <bits/stdc++.h>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout<<fixed<<setprecision(2);
	int t,a,b,x,y;
	cin>>t;
	while(t--){
	    cin>>a>>b>>x>>y;
	    if(a==b){
	        cout<<"YES"<<el;
	    }
	    else if(a+x>=b && a-y<=b){
	        cout<<"YES"<<el;
	    }
	    else{
	        cout<<"NO"<<el;
	    }
	}
	return 0;
}