#include <bits/stdc++.h>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout<<fixed<<setprecision(2);
	int t,a,b,m,d,k;
	cin>>t;
	while(t--){
	    cin>>a>>b; k=1;
	    if(a==b){
	        cout<<"YES"<<el;
	        continue;
	    }
	    m=max(a,b)%min(a,b);
	    if(m==0){
	        d=max(a,b)/min(a,b);
	        while(d>1 && k){
	            if(d%2!=0){
	                cout<<"NO"<<el;
        	        k=0;
	            }
        	    d/=2;
	        }
	        if(k){
	            cout<<"YES"<<el;
	        }
	    }
	    else{
	        cout<<"NO"<<el;
	    }
	}
	return 0;
}