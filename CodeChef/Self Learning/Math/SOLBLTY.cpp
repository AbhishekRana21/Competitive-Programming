#include <bits/stdc++.h>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout<<fixed<<setprecision(2);
	long t,x,a,b;
	cin>>t;
	while(t--){
	    cin>>x>>a>>b;
	    cout<<(a+(100-x)*b)*10<<el;
	}
	return 0;
}