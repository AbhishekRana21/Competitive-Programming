#include <iostream>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t,x,y;
	cin>>t;
	while(t--){
	    cin>>x>>y;
	    cout<<x-y<<el;
	}
	return 0;
}