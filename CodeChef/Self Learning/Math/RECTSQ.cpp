#include <bits/stdc++.h>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout<<fixed<<setprecision(2);
	int t,l,b,g;
	cin>>t;
	while(t--){
	    cin>>l>>b;
	    g = gcd(l,b);
	    cout<<(l/g)*(b/g)<<el;
	}
	return 0;
}