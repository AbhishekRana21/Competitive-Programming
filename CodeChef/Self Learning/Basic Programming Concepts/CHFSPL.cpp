#include <bits/stdc++.h>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	long t,a,b,c,m;
	cin>>t;
	while(t--){
	    cin>>a>>b>>c;
	    if(a>=b && a>=c){
	        m=max(b,c);
	        cout<<a+m<<el;
	    }
	    else if(b>=a && b>=c){
	        m=max(a,c);
	        cout<<b+m<<el;
	    }
	    else{
	        m=max(a,b);
	        cout<<c+m<<el;
	    }
	    
	    
	}
	return 0;
}
