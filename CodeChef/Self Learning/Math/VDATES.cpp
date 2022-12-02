#include <bits/stdc++.h>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout<<fixed<<setprecision(2);
	long t,d,l,r;
	cin>>t;
	while(t--){
	    cin>>d>>l>>r;
	    if(d>=l && d<=r){
	        cout<<"Take second dose now"<<el;
	    }
	    else if(d<l){
	        cout<<"Too Early"<<el;
	    }
	    else{
	        cout<<"Too Late"<<el;
	    }
	}
	return 0;
}