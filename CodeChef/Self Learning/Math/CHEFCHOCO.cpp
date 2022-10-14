#include <iostream>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t,c,x,y;
	cin>>t;
	while(t--){
	    cin>>c>>x>>y;
	    cout<<(c-x)*y<<el;
	}
	return 0;
}