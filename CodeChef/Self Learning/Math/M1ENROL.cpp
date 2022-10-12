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
	    if(y<=x){
	        cout<<0<<el;
	    }
	    else{
	        cout<<y-x<<el;
	    }
	}
	return 0;
}