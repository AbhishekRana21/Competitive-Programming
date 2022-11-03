#include <bits/stdc++.h>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout<<fixed<<setprecision(2);
	int t,x,y,z;
	cin>>t;
	while(t--){
	    cin>>x>>y>>z;
	    if(x+y<z){
	        cout<<"PLANEBUS"<<el;
	    }
	    else if(x+y>z){
	        cout<<"TRAIN"<<el;
	    }
	    else{
	        cout<<"EQUAL"<<el;
	    }
	}
	return 0;
}