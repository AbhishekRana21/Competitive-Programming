#include <iostream>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t,l,r,i;
	cin>>t;
	while(t--){
	    cin>>l>>r;
	    cout<<((r-l)*2)+1<<el;
	}
	return 0;
}
