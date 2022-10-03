#include <iostream>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t,a,b,x;
	cin>>t;
	while(t--){
	    cin>>a>>b>>x;
	    cout<<((b-a)/x)<<el;
	}
	return 0;
}
