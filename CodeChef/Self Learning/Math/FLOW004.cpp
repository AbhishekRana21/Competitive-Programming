#include <iostream>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t,n,r;
	cin>>t;
	while(t--){
	    cin>>n;
	    r = n%10;
	    while(n>9){
	        n/=10;
	    }
	    cout<<n+r<<el;
	}
	return 0;
}
