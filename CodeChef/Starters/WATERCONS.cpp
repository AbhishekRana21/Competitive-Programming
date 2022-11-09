#include <bits/stdc++.h>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout<<fixed<<setprecision(2);
	int t,x;
	cin>>t;
	while(t--){
	    cin>>x;
	    if(x>=2000){
	        cout<<"YES"<<el;
	    }
	    else{
	        cout<<"NO"<<el;
	    }
	}
	return 0;
}