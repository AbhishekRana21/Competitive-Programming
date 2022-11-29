#include <bits/stdc++.h>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout<<fixed<<setprecision(2);
	long t,n,s;
	cin>>t;
	while(t--){
	    cin>>n;
	    s = n/7;
	    if(n%7==6) ++s;
	    cout<<s<<el;
	}
	return 0;
}