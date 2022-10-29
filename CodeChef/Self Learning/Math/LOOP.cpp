#include <bits/stdc++.h>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout<<fixed<<setprecision(2);
	long t,a,b,m,w1,w2;
	cin>>t;
	while(t--){
	    cin>>a>>b>>m;
	    w1=max(a,b)-min(a,b);
	    w2=(m-max(a,b))+min(a,b);
	    if(w1<w2){
	        cout<<w1<<el;
	    }
	    else{
	        cout<<w2<<el;
	    }
	}
	return 0;
}