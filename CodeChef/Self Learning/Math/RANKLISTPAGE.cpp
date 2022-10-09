#include <iostream>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t,r;
	cin>>t;
	while(t--){
	    cin>>r;
	    if(r%25==0){
	        cout<<r/25<<el;
	    }
	    else{
	        cout<<(r/25)+1<<el;
	    }
	}
	return 0;
}