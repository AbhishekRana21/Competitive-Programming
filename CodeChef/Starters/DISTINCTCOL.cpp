#include <bits/stdc++.h>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout<<fixed<<setprecision(2);
	int t,n,a,m;
	cin>>t;
	while(t--){
	    cin>>n; m=0;
	    while(n--){
	        cin>>a;
	        m = (a>m)?a:m;
	    }
	    cout<<m<<el;
	}
	return 0;
}