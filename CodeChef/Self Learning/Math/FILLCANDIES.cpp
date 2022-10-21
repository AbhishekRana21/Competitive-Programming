#include <iostream>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t,n,k,m;
	cin>>t;
	while(t--){
	    cin>>n>>k>>m;
	    if(n%(k*m)==0){
	        cout<<n/(k*m)<<el;
	    }
	    else{
	        cout<<(n/(k*m))+1<<el;
	    }
	}
	return 0;
}