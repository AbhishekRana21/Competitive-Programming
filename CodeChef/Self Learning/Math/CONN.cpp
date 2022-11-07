#include <bits/stdc++.h>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout<<fixed<<setprecision(2);
	long t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    if(n%2!=0 && n<7){
	        cout<<"NO"<<el;
	    }
	    else{
	        cout<<"YES"<<el;
	    }
	}
	return 0;
}