#include <bits/stdc++.h>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout<<fixed<<setprecision(2);
	long t,n,m,k,d,x,f,y,r,q;
	cin>>t;
	while(t--){
	    cin>>n>>m>>k>>x; d=0; f=1;
	    if(x<=(n*(k-1))){
	        cout<<"NO"<<el;
	        continue;
	    }
	    r = x%((n*(k-1))+(n+m));
	    q = x/((n*(k-1))+(n+m));
	    if(r==0){
	        d = q*((n*(k-1))+(n+m));
	    }
	    else{
	        d = (q+1)*((n*(k-1))+(n+m));
	    }
	    if(d-x<n+m){
	        cout<<"YES"<<el;
	    }
	    else{
	        cout<<"NO"<<el;
	    }
	}
	return 0;
}