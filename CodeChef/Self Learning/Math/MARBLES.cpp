#include <bits/stdc++.h>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout<<fixed<<setprecision(2);
	long t,n,k,a,i;
	cin>>t;
	while(t--){
	    cin>>n>>k; a=1;
	    for(i=1;i<k;++i)
	    {
	        a=a*(n-k+i)/i;
	    }
	    cout<<a<<el;
	}
	return 0;
}