#include <iostream>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t,k,x;
	cin>>t;
	while(t--){
	    cin>>k>>x;
	    cout<<(k*7)-x<<el;
	}
	return 0;
}