#include <iostream>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t,n,x,k;
	cin>>t;
	while(t--){
	    cin>>n>>x>>k;
	    if(k/x>n){
	        cout<<n<<el;
	    }
	    else{
	        cout<<k/x<<el;
	    }
	}
	return 0;
}