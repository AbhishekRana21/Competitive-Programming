#include <iostream>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t,p,q;
	cin>>t;
	while(t--){
	    cin>>p>>q;
	    if(p+q>0){
	        if((p+q)%4==1 || (p+q)%4==0){
	        cout<<"Alice"<<el;
    	    }
    	    else{
    	        cout<<"Bob"<<el;
    	    }
	    }
	    else{
	        cout<<"Alice"<<el;
	    }
	}
	return 0;
}