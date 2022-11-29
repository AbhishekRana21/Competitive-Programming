#include <bits/stdc++.h>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout<<fixed<<setprecision(2);
	long t,n,k;
	cin>>t;
	while(t--){
	    cin>>n>>k;
	    if(n%k==0){
	        cout<<n/k<<el;
	    }
	    else{
	        cout<<(n/k)+1<<el;
	    }
	}
	return 0;
}