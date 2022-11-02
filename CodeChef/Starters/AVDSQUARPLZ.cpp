#include <bits/stdc++.h>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout<<fixed<<setprecision(2);
	int t,n,i;
	cin>>t;
	while(t--){
	    cin>>n; i=n;
	    while(i>0){
	        cout<<i<<" ";
	        i--;
	    }
	    cout<<el;
	}
	return 0;
}