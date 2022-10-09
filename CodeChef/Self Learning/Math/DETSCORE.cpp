#include <iostream>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t,x,n;
	cin>>t;
	while(t--){
	    cin>>x>>n;
	    cout<<(x/10)*n<<el;
	}
	return 0;
}