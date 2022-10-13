#include <iostream>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t,x,y,z;
	cin>>t;
	while(t--){
	    cin>>x>>y>>z;
	    cout<<(5*x+10*y)/z<<el;
	}
	return 0;
}