#include <bits/stdc++.h>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout<<fixed<<setprecision(2);
	int t,x,y;
	cin>>t;
	while(t--){
	    cin>>x>>y;
	    cout<<(x/y)+(x%y)<<el;
	}
	return 0;
}