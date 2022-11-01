#include <bits/stdc++.h>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout<<fixed<<setprecision(2);
	int t,x,y,xc,yc,total;
	cin>>t;
	while(t--){
	    cin>>x>>y>>xc>>yc;
	    total = (xc/x)+(yc/y);
	    cout<<total<<el;
	}
	return 0;
}