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
	    if((a+b)%2==0){
	        cout<<"Bob"<<el;
	    }
	    else{
	        cout<<"Alice"<<el;
	    }
	}
	return 0;
}