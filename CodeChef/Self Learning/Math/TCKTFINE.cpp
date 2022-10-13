#include <iostream>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t,x,p,q;
	cin>>t;
	while(t--){
	    cin>>x>>p>>q;
	    cout<<(p-q)*x<<el;
	}
	return 0;
}