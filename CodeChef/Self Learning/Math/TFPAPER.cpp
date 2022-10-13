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
	    cout<<n-k<<el;
	}
	return 0;
}