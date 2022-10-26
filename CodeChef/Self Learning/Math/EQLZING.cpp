#include <bits/stdc++.h>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout<<fixed<<setprecision(2);
	int t,a,b;
	cin>>t;
	while(t--){
	    cin>>a>>b;
	    if(a%2!=b%2){
	        cout<<"NO"<<el;
	    }
	    else{
	        cout<<"YES"<<el;
	    }
	}
	return 0;
}