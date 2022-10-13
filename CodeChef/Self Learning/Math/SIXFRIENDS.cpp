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
	    if(3*x<2*y){
	        cout<<3*x<<el;
	    }
	    else{
	        cout<<2*y<<el;
	    }
	}
	return 0;
}