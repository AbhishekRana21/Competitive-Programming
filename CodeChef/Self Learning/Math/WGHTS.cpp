#include <iostream>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t,w,x,y,z;
	cin>>t;
	while(t--){
	    cin>>w>>x>>y>>z;
	    if(w==x || w==y || w==z){
	        cout<<"YES"<<el;
	    }
	    else if(w==x+y || w==y+z || w==x+z){
	        cout<<"YES"<<el;
	    }
	    else if(w==x+y+z){
	        cout<<"YES"<<el;
	    }
	    else{
	        cout<<"NO"<<el;
	    }
	}
	return 0;
}