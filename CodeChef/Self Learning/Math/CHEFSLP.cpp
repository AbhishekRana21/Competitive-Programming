#include <bits/stdc++.h>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout<<fixed<<setprecision(2);
	long t,n,l,x;
	cin>>t;
	while(t--){
	    cin>>n>>l>>x;
	    cout<<min(l,n-l)*x<<el;
	}
	return 0;
}