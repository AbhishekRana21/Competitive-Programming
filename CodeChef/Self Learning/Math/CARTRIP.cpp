#include <iostream>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t,x;
	cin>>t;
	while(t--){
	    cin>>x;
	    if(x<=300){
	        cout<<3000<<el;
	    }
	    else{
	        cout<<x*10<<el;
	    }
	}
	return 0;
}