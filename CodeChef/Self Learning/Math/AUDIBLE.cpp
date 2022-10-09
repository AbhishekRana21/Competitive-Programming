#include <iostream>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	long t,x;
	cin>>t;
	while(t--){
	    cin>>x;
	    if(x>=67 && x<=45000){
	        cout<<"YES"<<el;
	    }
	    else{
	        cout<<"NO"<<el;
	    }
	}
	return 0;
}