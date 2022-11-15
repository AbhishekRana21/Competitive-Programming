#include <bits/stdc++.h>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout<<fixed<<setprecision(2);
	int t,g,c;
	cin>>t;
	while(t--){
	    cin>>g>>c;
	    cout<<(c*c)/(2*g)<<el;
	}
	return 0;
}