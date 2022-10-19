#include <iostream>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t,n,x;
	cin>>t;
	while(t--){
	    cin>>n>>x;
	    if(n-x==n || n-x==0){
	        cout<<0<<el;
	    }
	    else if(n-x>x){
	        cout<<x<<el;
	    }
	    else{
	        cout<<n-x<<el;
	    }
	}
	return 0;
}