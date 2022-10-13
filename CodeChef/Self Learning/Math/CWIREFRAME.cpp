#include <iostream>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	long t,n,m,x;
	cin>>t;
	while(t--){
	    cin>>n>>m>>x;
	    cout<<x*(2*(n+m))<<el;
	}
	return 0;
}