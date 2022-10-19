#include <iostream>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t,x,y;
	cin>>t;
	while(t--){
	    cin>>x>>y;
	    if(x==y){
	        cout<<0<<el;
	    }
	    else if(x>y){
	        cout<<x-y<<el;
	    }
	    else{
	        cout<<y-x<<el;
	    }
	}
	return 0;
}