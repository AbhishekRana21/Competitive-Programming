#include <bits/stdc++.h>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t,w1,w2,x1,x2,M;
	cin>>t;
	while(t--){
	    cin>>w1>>w2>>x1>>x2>>M;
	    if(w2-w1<=M*max(x1,x2) && w2-w1>=M*min(x1,x2)){
	        cout<<1<<el;
	    }
	    else{
	        cout<<0<<el;
	    }
	}
	return 0;
}
