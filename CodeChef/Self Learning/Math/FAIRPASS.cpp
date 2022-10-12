#include <iostream>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t,n,k;
	cin>>t;
	while(t--){
	    cin>>n>>k;
	    if(n<=k-1){
	        cout<<"Yes"<<el;
	    }
	    else{
	        cout<<"No"<<el;
	    }
	}
	return 0;
}