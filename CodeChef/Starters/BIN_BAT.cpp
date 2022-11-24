#include <bits/stdc++.h>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout<<fixed<<setprecision(2);
	long t,n,a,b,c,tt;
	cin>>t;
	while(t--){
	    cin>>n>>a>>b; c=0;
	    while(n>1){
	        n /= 2;
	        c++;
	    }
	    tt = (c*a)+(c-1)*b;
	    cout<<tt<<el;
	}
	return 0;
}