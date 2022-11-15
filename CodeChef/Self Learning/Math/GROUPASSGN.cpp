#include <bits/stdc++.h>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout<<fixed<<setprecision(2);
	long t,n,x;
	cin>>t;
	while(t--){
	    cin>>n>>x;
	    cout<<(2*n)-(x-1)<<el;
	}
	return 0;
}