#include <bits/stdc++.h>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout<<fixed<<setprecision(2);
	int t,x,y,p,q;
	cin>>t;
	while(t--){
	    cin>>x>>y>>p>>q;
	    if(x+(10*p)<(y+(10*q))){
	        cout<<"Chef"<<el;
	    }
	    else if(x+(10*p)>(y+(10*q))){
	        cout<<"Chefina"<<el;
	    }
	    else{
	        cout<<"Draw"<<el;
	    }
	}
	return 0;
}