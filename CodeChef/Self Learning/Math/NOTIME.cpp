#include <bits/stdc++.h>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout<<fixed<<setprecision(2);
	long n,h,x,tz,ct;
	cin>>n>>h>>x; ct=1;
	    while(n--){
	        cin>>tz;
	        if(x+tz>=h){
	            ct=0;
	        }
	    }
	    if(ct){
	        cout<<"NO"<<el;
	    }
	    else{
	        cout<<"YES"<<el;
	    }
	return 0;
}